#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct radnik {
float br_sati, cenaposatu;
};

int main() {
radnik radnici[10];
float max = 0, plata;
int i;
srand(time(0));
for(i = 0; i < 10; i++) {
radnici[i].br_sati = rand()%(200 + 50);
radnici[i].cenaposatu = rand()%1000 + 250;
plata = radnici[i].br_sati * radnici[i].cenaposatu;
if(plata > max)
max = plata;
printf("Radnik %d je radio %.2f sati, i plata je %.2f po satu", i, radnici[i].br_sati, radnici[i].cenaposatu);
printf("\nPlata je: %.2f", plata);
}
return 0;
}
