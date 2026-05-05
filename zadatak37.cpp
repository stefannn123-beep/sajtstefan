#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char ime[100];
    float osnovnaPlata;
} Radnik;

void unosPodataka(Radnik* r) {
    printf("Unesite ime radnika: ");
    fgets(r->ime, 100, stdin);
    r->ime[strcspn(r->ime, "\n")] = '\0';

    printf("Unesite osnovnu platu: ");
    scanf("%f", &r->osnovnaPlata);
}

void ispisPodataka(const Radnik* r) {
    printf("Ime radnika: %s\n", r->ime);
    printf("Osnovna plata: %.2f RSD\n", r->osnovnaPlata);
}

int main() {
    Radnik radnik1;

    unosPodataka(&radnik1);
    ispisPodataka(&radnik1);

    return 0;
}
