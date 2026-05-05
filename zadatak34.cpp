#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main() {
    int N;

    printf("Unesite broj N: ");
    scanf("%d", &N);

    int niz[N];

    printf("Unesite %d jedinstvenih brojeva: \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &niz[i]);
    }

    long long broj = 0;
    for (int i = 0; i < N; i++) {
        broj = broj * 10 + niz[i];
    }

    printf("Formirani broj: %lld\n", broj);

    return 0;
}
