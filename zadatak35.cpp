#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

long long pretvoriBroj(char niz[], int N) {
    long long broj = 0;
    for (int i = 0; i < N; i++) {
        if (!isdigit(niz[i])) {
            printf("Greška: Uneseni znakovi nisu brojevi!\n");
            exit(1);
        }
        broj = broj * 10 + (niz[i] - '0');
    }
    return broj;
}

int main() {
    int N;

    printf("Unesite broj N: ");
    scanf("%d", &N);

    char niz[N + 1];
    printf("Unesite niz %d znakova: \n", N);
    for (int i = 0; i < N; i++) {
        scanf(" %c", &niz[i]);
    }
    niz[N] = '\0';

    long long broj = pretvoriBroj(niz, N);

    printf("Formirani broj: %lld\n", broj);

    return 0;
}
