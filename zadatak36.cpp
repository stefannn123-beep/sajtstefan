#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

typedef struct {
    int *brojevi;
    int N;
} Brojevi;

void unesiBrojeve(Brojevi* b) {
    printf("Unesite %d brojeva:\n", b->N);
    for (int i = 0; i < b->N; i++) {
        scanf("%d", &b->brojevi[i]);
    }
}

int saberiBrojeve(Brojevi* b) {
    int zbir = 0;
    for (int i = 0; i < b->N; i++) {
        zbir += b->brojevi[i];
    }
    return zbir;
}

int main() {
    int N;
    printf("Unesite broj brojeva: ");
    scanf("%d", &N);

    Brojevi b;
    b.N = N;
    b.brojevi = (int*)malloc(N * sizeof(int));

    if (b.brojevi == NULL) {
        printf("Greška pri alokaciji memorije.\n");
        return 1;
    }

    unesiBrojeve(&b);

    int zbir = saberiBrojeve(&b);
    printf("Zbir unetih brojeva je: %d\n", zbir);

    free(b.brojevi);
    return 0;
}
