#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Drvo {
private:
    float poluprecnik;
    float duzina;
public:
    void dodeli(float r, float h) {
        poluprecnik = r;
        duzina = h;
    }

    float zapremina() {
        return 3.14f * poluprecnik * poluprecnik * duzina;
    }

    float povrsina() {
        return 2 * 3.14f * poluprecnik * (poluprecnik + duzina);
    }
};

int main() {
    srand(time(0));

    Drvo niz[20];
    float ukupnaZapremina = 0;

    for (int i = 0; i < 20; i++) {
        float r = rand() % 10 + 1;
        float h = rand() % 50 + 10;
        niz[i].dodeli(r, h);
        ukupnaZapremina += niz[i].zapremina();
        cout << "Drvo " << i + 1 << ": Povrsina = " << niz[i].povrsina()
             << ", Zapremina = " << niz[i].zapremina() << endl;
    }

    cout << "\nUkupna zapremina svih stabala: " << ukupnaZapremina << endl;

    return 0;
}
