#include <iostream>
#include <stdio.h>

int main() {
int i, n;
float s = 0, k;
printf("Uneti broj n: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
printf("Uneti %d. broj: ", i);
scanf("%f", &k);
s += k;
}
printf("Srednja vrednost je %.2f", s / n);
return 0;
}

