#include <stdio.h>

int main() {
    int lista[10];
    int i;


    printf("Unesi 10 celih brojeva:\n");
    for(i = 0; i < 10; i++) {
        printf("Broj %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nClanovi liste su:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}

