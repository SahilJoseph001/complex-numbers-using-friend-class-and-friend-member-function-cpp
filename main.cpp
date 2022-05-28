// *** Coded By SahilJoseph *** //
# include <iostream>

// Forward Declaration.
// Forward Declaration is important if the class body is far ago, We are telling the compiler that run the code and trust me the class is here in this program.
class Complex;


class Calculate {
    private:
        int priadd;
    public:
        int add(int a, int b) {
            return a + b;
        }
        // int sumRealComplex(Complex o, Complex p); // Error!. Becuase we just told the compiler that there is a class of Complex. But not about the it is have o and p. This is why.
        int sumRealComplex(Complex , Complex);
        int sumCompComplex(Complex , Complex);
};


class Complex {
    private:
        int a;
        int b;
    public:
        void set(int n, int m) {
            a = n;
            b = m;
        }
        // Manually Giving Access to each Data my Friend Member Function.
            // friend int Calculate::sumRealComplex(Complex o1, Complex o2); // This is making the Friend Member Function.
            // friend int Calculate::sumCompComplex(Complex o1, Complex o2); // This is making the Friend Member Function.
        // Making Friend Calss.
        friend class Calculate; // We created Friend Class. Now every data of Complex has access to Friend class Calculate.
        void print(void) {
            std::cout<<"The value of a is : "<<a<<std::endl;
            std::cout<<"The value of b is : "<<b<<std::endl;
        }
};


int Calculate :: sumRealComplex(Complex o1, Complex o2) {
            return (o1.a + o2.a);
    }
int Calculate :: sumCompComplex(Complex o1, Complex o2) {
            return (o1.b + o2.b);
    }


int main(int argc, char const *argv[]) {

    // Friend Member Function.
    // Friend Member Function the making friend of function of another class funciton to another class funtion.

    // Friend Classes.
    // Friend Classes when there are so many functions. We cannot make friend of each funciton because of it is so boring to do. So we make Friend Class which mean evey funciton of friend class has permission to a friend private data.

    Complex obj1, obj2;
    obj1.set(4,5);
    obj1.print();
    obj2.set(4,5);
    obj2.print();

    Calculate cal;
    int res = cal.sumRealComplex(obj1, obj2);
    std::cout<<"The sum of real part of obj1 and obj2 is : "<<res<<std::endl;
    int ress = cal.sumCompComplex(obj1, obj2);
    std::cout<<"The sum of complex part of obj1 and obj2 is : "<<ress<<std::endl;

    // 

    return 0;
}
