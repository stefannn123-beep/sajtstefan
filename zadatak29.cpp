#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double deljenje(double a, double b) {
    if (b == 0) {
        printf("Greška: Deljenje sa nulom!\n");
        return 0;
    }
    return a / b;
}

int main() {
    double broj1, broj2, rezultat;

    printf("Unesite prvi realan broj: ");
    scanf("%lf", &broj1);

    printf("Unesite drugi realan broj: ");
    scanf("%lf", &broj2);

    rezultat = deljenje(broj1, broj2);

    printf("Rezultat deljenja: %.2lf\n", rezultat);

    return 0;
}
