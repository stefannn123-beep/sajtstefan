#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *fajl;
    int i, broj;

    srand(time(0));


    fajl = fopen("random_brojevi.txt", "w");
    if(fajl == NULL) {
        printf("Greska pri otvaranju fajla!\n");
        return 1;
    }


    for(i = 0; i < 10; i++) {
        broj = rand() % 100 + 1;
        fprintf(fajl, "%d\n", broj);
    }

    fclose(fajl);

    printf("10 random brojeva je upisano u fajl 'random_brojevi.txt'.\n");

    return 0;
}
