#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int zapremina(int x, int y, int z) {
int rezultat;
rezultat = x * y * z;
return rezultat;
}

int main() {
int a, b, c;
printf("Unesi dimenzije za Mikin bačen\n");
scanf("%d%d%d", &a, &b, &c);
printf("Mikin bačen ima zapreminu: %d", zapremina(a, b, c));
printf("\nUnesi dimenzije za Žikin bačen\n");
scanf("%d%d%d", &a, &b, &c);
printf("Žikin bačen ima zapreminu: %d", zapremina(a, b, c));
return 0;
}
