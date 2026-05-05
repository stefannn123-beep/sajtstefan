#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

class Valjak {
private:
    double obim;
    double visina;

public:
    Valjak(double o, double v) : obim(o), visina(v) {}

    double zapremina() {
        double radius = obim / (2 * M_PI);
        return M_PI * pow(radius, 2) * visina;
    }
};

int main() {
    srand(time(0));

    const int N = 10;
    Valjak valjci[N] = {
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10),
        Valjak(rand() % 100 + 10, rand() % 100 + 10)
    };

    double ukupnaZapremina = 0;


    for (int i = 0; i < N; i++) {
        ukupnaZapremina += valjci[i].zapremina();
    }

    cout << "Ukupna zapremina svih valjaka je: " << ukupnaZapremina << endl;

    return 0;
}
