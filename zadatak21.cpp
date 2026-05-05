#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void sabiranje(int broj, int *zbir, int N) {
    *zbir += broj;
    if (*zbir > N) {
        printf("Greška: Zbir je prešao vrednost N!\n");
        exit(1);
    }
}

int main() {
    int broj, zbir = 0, N;

    printf("Unesite vrednost N: ");
    scanf("%d", &N);

    printf("Unesite brojeve za sabiranje. Da biste završili, unesite 0.\n");

    while (1) {
        printf("Unesite broj: ");
        scanf("%d", &broj);

        if (broj == 0) {
            break;
        }

        sabiranje(broj, &zbir, N);
        printf("Trenutni zbir: %d\n", zbir);
    }

    printf("Konačan zbir: %d\n", zbir);
    return 0;
}
