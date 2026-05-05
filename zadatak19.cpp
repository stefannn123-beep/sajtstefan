#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    FILE *f1, *f2;
    int sati;
    float cena, plata;

    srand(time(NULL));

    f1 = fopen("radnici.txt", "w");
    if(f1 == NULL)
    {
        printf("Greska pri otvaranju fajla radnici.txt\n");
        exit(1);
    }

    for(int i = 0; i < 10; i++)
    {
        sati = rand() % 161 + 80;
        cena = rand() % 2000 / 10.0 + 10;
        fprintf(f1, "%d %.2f\n", sati, cena);
    }

    fclose(f1);

    f1 = fopen("radnici.txt", "r");
    if(f1 == NULL)
    {
        printf("Greska pri citanju fajla radnici.txt\n");
        exit(1);
    }

    f2 = fopen("plate.txt", "w");
    if(f2 == NULL)
    {
        printf("Greska pri otvaranju fajla plate.txt\n");
        exit(1);
    }

    while(fscanf(f1, "%d %f", &sati, &cena) == 2)
    {
        plata = sati * cena;
        plata = round(plata * 100) / 100;
        fprintf(f2, "%.2f\n", plata);
    }

    fclose(f1);
    fclose(f2);

    f2 = fopen("plate.txt", "r");
    if(f2 == NULL)
    {
        printf("Greska pri citanju fajla plate.txt\n");
        exit(1);
    }

    while(fscanf(f2, "%f", &plata) == 1)
    {
        printf("%.2f\n", plata);
    }

    fclose(f2);

    return 0;
}
