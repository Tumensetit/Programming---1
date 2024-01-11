#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct
{
    double x;
    double y;
}koordi;

double laskeetaisyys(koordi piste1, koordi piste2);

int main(void){

    koordi piste[5];
    int i, j = 1;
    double etaisyysalkuloppu = 0, etaisyys = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &piste[i].x);
        scanf("%lf", &piste[i].y);
    }
    
    for (int i = 0; i < 4; i++, j++)
    {
        etaisyys = etaisyys + laskeetaisyys(piste[i], piste[j]);
    }

    etaisyysalkuloppu = laskeetaisyys(piste[0], piste[4]);

    printf("Etäisyys mutkitellen on %.3lf\n", etaisyys);
    printf("Alku ja loppupisteiden valinen etaisyys on %.3lf", etaisyysalkuloppu);

}

double laskeetaisyys(koordi piste1, koordi piste2){

    double etaisyys;

    etaisyys = sqrt(pow((piste1.x - piste2.x), 2) + pow((piste1.y - piste2.y), 2));

    return etaisyys;
}

/*
Tee ohjelma, jossa talletetaan tason pisteiden koordinaatteja (5 kpl) tietuetaulukkoon.
Talletetut pisteet kuvaavat toisiinsa liittyviä suoria,
ohjelma laskee ja tulostaa suorien muodostaman ketjun pituuden sekä kuinka pitkä matka olisi "linnuntietä" alku- ja loppupisteiden välillä.

Kahden pisteen välinen etäisyys voidaan laskea kaavalla



kaava kahden pisteen välisen etäisyyden laskemiseen



Muotoile lopputulos seuraavasti:

Etäisyys mutkitellen on #.###
Alku ja loppupisteiden valinen etaisyys on #.###
*/