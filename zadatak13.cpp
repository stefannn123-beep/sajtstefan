#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

class cetvorougao {
private:
int duzina, sirina;
public:
int povrsina() {
int rezultat;
rezultat = duzina * sirina;
return rezultat;
}

void dodeli_vrednosti(int x, int y) {
duzina = x;
sirina = y;
}
};

int main() {
cetvorougao z;
int a, b;
printf("Unesi duzinu\n");
scanf("%d", &a);
printf("Unesi sirinu\n");
scanf("%d", &b);
z.dodeli_vrednosti(a, b);
printf("\nPovrsina je: %d", z.povrsina());
return 0;
}
