#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef struct {
    int brojCisterni;
    int brojTockovaPoCisterni;
} Kamion;

Kamion operatorSabiranje(Kamion v1, Kamion v2) {
    Kamion noviKamion;
    noviKamion.brojCisterni = v1.brojCisterni + v2.brojCisterni;
    noviKamion.brojTockovaPoCisterni = v1.brojTockovaPoCisterni + v2.brojTockovaPoCisterni;
    return noviKamion;
}

int ukupnoTockova(Kamion v) {
    return v.brojCisterni * v.brojTockovaPoCisterni;
}

void ispisiKamion(Kamion v) {
    printf("Broj cisterni: %d, Broj tockova po cisterni: %d\n", v.brojCisterni, v.brojTockovaPoCisterni);
}

int main() {
    srand(time(0));

    Kamion kamion1 = {rand() % 10 + 1, rand() % 5 + 4};
    Kamion kamion2 = {rand() % 10 + 1, rand() % 5 + 4};

    printf("Podaci o prvom kamionu:\n");
    ispisiKamion(kamion1);
    printf("Podaci o drugom kamionu:\n");
    ispisiKamion(kamion2);

    Kamion zbirniKamion = operatorSabiranje(kamion1, kamion2);

    printf("Podaci o zbirnom kamionu:\n");
    ispisiKamion(zbirniKamion);

    int ukupnoTockovaZbirnogKamiona = ukupnoTockova(zbirniKamion);
    int ukupnoCisterniZbirnogKamiona = zbirniKamion.brojCisterni;

    float prosecanBrojTockovaPoCisterni = (float)ukupnoTockovaZbirnogKamiona / ukupnoCisterniZbirnogKamiona;

    printf("Prosečan broj tockova po cisterni: %.2f\n", prosecanBrojTockovaPoCisterni);

    return 0;
}
