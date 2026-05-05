#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void uporedi(int broj1, int broj2) {
    if (broj1 == broj2) {
        printf("Brojevi su isti.\n");
    } else {
        printf("Greška: Brojevi su različiti!\n");
        exit(1);
    }
}

int main() {
    int broj1, broj2;

    printf("Unesite prvi broj: ");
    scanf("%d", &broj1);

    printf("Unesite drugi broj: ");
    scanf("%d", &broj2);

    uporedi(broj1, broj2);

    return 0;
}
