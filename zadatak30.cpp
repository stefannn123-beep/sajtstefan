#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void proveraGodina(int godine) {
    if (godine < 18) {
        printf("Greška: Morate imati barem 18 godina!\n");
        exit(1);
    }
}

int main() {
    int godine;

    printf("Unesite koliko imate godina: ");
    scanf("%d", &godine);

    proveraGodina(godine);

    printf("Dobrodošli! Imate dovoljno godina.\n");

    return 0;
}
