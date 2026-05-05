#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void sabiranje(int broj, int *zbir) {
    *zbir += broj;
}

int main() {
    int broj, zbir = 0;

    printf("Unesite brojeve za sabiranje. Program prestaje kada unesete broj deljiv sa 3.\n");

    while (1) {
        printf("Unesite broj: ");
        scanf("%d", &broj);

        if (broj % 3 == 0) {
            printf("Greška: Uneli ste broj deljiv sa 3. Prekida se sabiranje.\n");
            break;
        }

        sabiranje(broj, &zbir);
        printf("Trenutni zbir: %d\n", zbir);
    }

    printf("Konačan zbir brojeva koji su sabrani: %d\n", zbir);
    return 0;
}
