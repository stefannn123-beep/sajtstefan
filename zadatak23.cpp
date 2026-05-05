#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

using namespace std;

class Balvan {
private:
    double obim;
    double visina;

public:

    Balvan(double o, double v) : obim(o), visina(v) {}

    double zapremina() {
        double radius = obim / (2 * M_PI);
        return M_PI * pow(radius, 2) * visina;
    }

    double getZapremina() {
        return zapremina();
    }

    double getObim() {
        return obim;
    }

    double getVisina() {
        return visina;
    }
};

int main() {
    srand(time(0));

    const int N = 100;
    Balvan* balvani = new Balvan[N];


    for (int i = 0; i < N; i++) {
        double obim = rand() % 100 + 10;
        double visina = rand() % 100 + 10;
        balvani[i] = Balvan(obim, visina);
    }

    double maxZapremina = balvani[0].getZapremina();
    for (int i = 1; i < N; i++) {
        double zapremina = balvani[i].getZapremina();
        if (zapremina > maxZapremina) {
            maxZapremina = zapremina;
        }
    }

    printf("Najveća zapremina balvana je: %.2f\n", maxZapremina);

    delete[] balvani;

    return 0;
}
