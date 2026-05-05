#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct Njiva {
    int duzina;
    int sirina;
    float povrsina;
};

int main() {
    srand(time(0));
    Njiva niz[30];
    float mini = 999999;
    int pozicija = 0;

    for (int i = 0; i < 30; i++) {
        niz[i].duzina = rand() % 490 + 10;
        niz[i].sirina = rand() % 40 + 10;
        niz[i].povrsina = niz[i].duzina * niz[i].sirina;

        if (niz[i].povrsina < mini) {
            mini = niz[i].povrsina;
            pozicija = i;
        }
    }

    printf("%d. njiva ima najmanju površinu: %.4f ar\n", pozicija + 1, mini / 100);

    return 0;
}
