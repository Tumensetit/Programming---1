#include <stdio.h>

int main(void){


int binaari1, binaari2, binaari3, binaari4, binaari5, tulos;

scanf("%1d%1d%1d%1d%1d", &binaari1, &binaari2, &binaari3, &binaari4, &binaari5);

tulos = binaari1 * (2*2*2*2) + binaari2 * (2*2*2) + binaari3 * (2*2) + binaari4 * (2) + binaari5 * 1;

printf("%d\n", tulos);

}

/*
Binääriluku sisältää merkkejä 1 ja 0. Binääriluku muutetaan kymmenjärjestelmän luvuksi seuraavasti:

binääriluvusta 1101 saadaan luku 13 laskemalla 

1 * 23 + 1 * 22 + 0 * 21 + 1 * 20, jossa 

23 = 8
22 = 4
21 = 2
20 = 1
Suunnittele ja toteuta ohjelma, joka lukee viisinumeroisen binääriluvun ja muuttaa sen kymmenjärjestelmän luvuksi ja tulostaa tuloksen kuvaruudulle. 
*/