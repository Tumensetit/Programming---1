#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tulostus(int taulukko[]);

int main(void){

    srand(time(0));
    int taulukko[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, luku1, luku2, yhteensa;

    for (i = 0; i < 36000; i++)
    {
        luku1 = rand() % 6;
        luku2 = rand() % 6;
        yhteensa = luku1 + luku2;
        taulukko[yhteensa]++;
    }
    
    tulostus(taulukko);
}

int tulostus(int taulukko[]){

    int i, yht = 0;

    for (i = 0; i < 11; i++)
    {
        printf("%d  %d\n", i + 2, taulukko[i]);
    }

    for (i = 0; i < 11; i++)
    {
        yht = yht + taulukko[i];
    }
    
    printf("YHTEENSA	 %d", yht);

    return 0;
}

/*
Kirjoita ohjelma, joka simuloi kahden nopan heittoa, ohjelma käyttää rand-funktiota noppana.
Ohjelma heittää noppia 36000 kertaa ja laskee kunkin heiton noppien silmälukujen summan.

Koska yksi noppa voi saada arvoja 1 - 6, voi summat vaihdella väliltä 2 - 12, joista summa 7 esiintyy useimmin ja summat 2 ja 12 ovat kaikkein harvinaisimmat. 

Kirjaa yksiulotteiseen taulukkoon summien esiintymät ja tulosta esiintymismäärät taulukkomuodossa esimerkiksi näin:

Summa	Lukumäärä
2	###
3	####
 4	####
 5	 ...
 6	 ...
 ...	 ...
 12	 ####
 YHTEENSA	 36000

*/