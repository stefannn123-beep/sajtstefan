#include<iostream>
using namespace std;

class Saberi {
public:

    int saberi(int a, int b) {
        return a + b;
    }


    double saberi(double a, double b) {
        return a + b;
    }


    int saberi(int a, int b, int c) {
        return a + b + c;
    }


    double saberi(double a, double b, double c, double d) {
        return a + b + c + d;
    }
};

int main() {
    Saberi s;


    cout << "Sabiranje dva cela broja: " << s.saberi(5, 7) << endl;
    cout << "Sabiranje dva decimalna broja: " << s.saberi(3.5, 4.2) << endl;
    cout << "Sabiranje tri cela broja: " << s.saberi(1, 2, 3) << endl;
    cout << "Sabiranje četiri decimalna broja: " << s.saberi(1.1, 2.2, 3.3, 4.4) << endl;

    return 0;
}
