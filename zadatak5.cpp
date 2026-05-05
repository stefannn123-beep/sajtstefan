#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
int i, n, k, s=0;
printf("Unesi broj n:");
scanf("%d", &n);
printf("Unesi broj k:");
scanf("%d", &k);
for(i=n;i<=k;i++)
s+=i;
printf("\nZbir brojeva je %d", s);
return 0;
}
