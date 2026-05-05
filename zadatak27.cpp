#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef struct {
    int brojVagona;
    int brojSedistaPoVagonu;
} Voz;

Voz saberiVozove(Voz v1, Voz v2) {
    Voz noviVoz;
    noviVoz.brojVagona = v1.brojVagona + v2.brojVagona;
    noviVoz.brojSedistaPoVagonu = v1.brojSedistaPoVagonu + v2.brojSedistaPoVagonu;
    return noviVoz;
}

int ukupnoSedista(Voz v) {
    return v.brojVagona * v.brojSedistaPoVagonu;
}

void ispisiVoz(Voz v) {
    printf("Broj vagona: %d, Broj sedista po vagonu: %d\n", v.brojVagona, v.brojSedistaPoVagonu);
}

int main() {
    srand(time(0));

    Voz voz1 = {rand() % 10 + 1, rand() % 50 + 10};
    Voz voz2 = {rand() % 10 + 1, rand() % 50 + 10};

    printf("Podaci o prvom vozu:\n");
    ispisiVoz(voz1);
    printf("Podaci o drugom vozu:\n");
    ispisiVoz(voz2);

    Voz noviVoz = saberiVozove(voz1, voz2);

    printf("Podaci o novom vozu nakon sabiranja:\n");
    ispisiVoz(noviVoz);

    printf("Ukupno sedista u novom vozu: %d\n", ukupnoSedista(noviVoz));

    return 0;
}
