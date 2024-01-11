#include <stdio.h>

int main(void){

int kokonaisluku1, kokonaisluku2, kokonaisluku3, kokonaisluku4, kokonaisluku5, kokonaisluku6, kokonaisluku7, kokonaisluku8, kokonaisluku9, kokonaisluku10, suurin;

    scanf("%d", &kokonaisluku1);
    scanf("%d", &kokonaisluku2);
    scanf("%d", &kokonaisluku3);
    scanf("%d", &kokonaisluku4);
    scanf("%d", &kokonaisluku5);
    scanf("%d", &kokonaisluku6);
    scanf("%d", &kokonaisluku7);
    scanf("%d", &kokonaisluku8);
    scanf("%d", &kokonaisluku9);
    scanf("%d", &kokonaisluku10);

    if(kokonaisluku1 > kokonaisluku2)
        suurin = kokonaisluku1;

        else suurin = kokonaisluku2;

    if(kokonaisluku3 > suurin)
        suurin = kokonaisluku3;

    if(kokonaisluku4 > suurin)
        suurin = kokonaisluku4;

    if(kokonaisluku5 > suurin)
        suurin = kokonaisluku5;

    if(kokonaisluku6 > suurin)
        suurin = kokonaisluku6;

    if(kokonaisluku7 > suurin)
        suurin = kokonaisluku7;

    if(kokonaisluku8 > suurin)
        suurin = kokonaisluku8;

    if(kokonaisluku9 > suurin)
        suurin = kokonaisluku9;

    if(kokonaisluku10 > suurin)
        suurin = kokonaisluku10;

    printf("Suurin syottamasi luku oli %d", suurin);
}



/*
Suunnittele ja toteuta ohjelma, joka lukee 10 kokonaislukua (int) ja ilmoittaa lopuksi mikä syötetyistä luvuista oli suurin.
Tulosta käyttäjälle kehote syöttää luku erikseen jokaisen luvun kohdalla, sekä lopputuloksena rivi muotoa:

Suurin syottamasi luku oli #
*/