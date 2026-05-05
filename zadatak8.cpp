#include <iostream>
#include <stdio.h>

using namespace std;

struct radnik {
float br_sati, cenaposatu;
};

int main() {
radnik zika, mika;
float mp, zp;
printf("Uneti koliko je radio Zika:\n");
scanf("%f", &zika.br_sati);
printf("Uneti Zikina plata po satu\n");
scanf("%f", &zika.cenaposatu);
printf("Uneti koliko je radio Mika:\n");
scanf("%f", &mika.br_sati);
printf("Uneti Mikinu platu po satu:\n");
scanf("%f", &mika.cenaposatu);

mp = zika.br_sati * zika.cenaposatu;
zp = mika.br_sati * mika.cenaposatu;

if(mp > zp)
printf("Mika ima vecu platu");
else
if(mp < zp)
printf("Zika ima vecu platu");
else
printf("Imaju istu platu");
return 0;
}



