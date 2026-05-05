#include <iostream>

using namespace std;

class PRIMER
{
private:
    const int a;
    const int b;
    static int brojacObjekata;

public:
    PRIMER(int x, int y) : a(x), b(y)
    {
        brojacObjekata++;
    }

    static void brojac()
    {
        cout << "Broj kreiranih objekata: " << brojacObjekata << endl;
    }

    void prikaz()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int PRIMER::brojacObjekata = 0;

int main()
{
    PRIMER p1(10, 20);
    PRIMER p2(30, 40);
    PRIMER p3(50, 60);

    p1.prikaz();
    p2.prikaz();
    p3.prikaz();

    PRIMER::brojac();

    return 0;
}
