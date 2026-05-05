#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int veci_broj(int gajic, int radmila) {
int koimavise;
if(gajic > radmila) koimavise = gajic;
if(gajic < radmila) koimavise = radmila;
if(gajic == radmila) koimavise = radmila;
return koimavise;
}

int main() {
int a, b;
printf("Unesi prvi broj\n");
scanf("%d", &a);
printf("Unesi drugi broj\n");
scanf("%d", &b);
printf("Veci broj je: %d", veci_broj(a, b));
return 0;
}

