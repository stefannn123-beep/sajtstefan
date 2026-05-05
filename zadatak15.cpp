#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Krug {
private:
    float poluprecnik;
public:
    void dodeli(float r) {
        poluprecnik = r;
    }

    float obim() {
        return 2 * 3.14f * poluprecnik;
    }

    float povrsina() {
        return 3.14f * poluprecnik * poluprecnik;
    }

    float getPoluprecnik() {
        return poluprecnik;
    }
};

int main() {
    srand(time(0));

    Krug niz[10];
    float maxObim = 0;
    int pozicijaMax = 0;

    cout << "Podaci o krugovima:\n";
    for(int i = 0; i < 10; i++) {
        float r = rand() % 10 + 1;
        niz[i].dodeli(r);

        float obim = niz[i].obim();
        float povrsina = niz[i].povrsina();
        cout << "Krug " << i + 1 << ": Poluprecnik = " << r
             << ", Obim = " << obim
             << ", Povrsina = " << povrsina << endl;

        if(obim > maxObim) {
            maxObim = obim;
            pozicijaMax = i;
        }
    }

    cout << "\nNajveci obim ima krug " << pozicijaMax + 1
         << " sa obimom " << maxObim << endl;

    return 0;
}
