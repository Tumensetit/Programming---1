#include <stdio.h>

int main(void){

double luku1, luku2 = 0, luku3, keskiarvo;
int laskuri = 0;

scanf("%lf", &luku1);

    while(luku1 >= luku2){

        luku2 = luku1;

        scanf("%lf", &luku3);

        luku1 = luku1 + luku3;

        laskuri = laskuri + 1;

    }

keskiarvo = luku2 / laskuri;

printf("%.2lf", keskiarvo);

}

/*
Tee ohjelma, joka laskee yhteen käyttäjän syöttämiä positiivisia reaalilukuja (double), kunnes käyttäjä syöttää negatiivisen luvun, 
Ohjelma laskee syötettyjen positiivisten lukujen keskiarvon ja tulostaa keskiarvon kahden desimaalin tarkkuudella.
(Kokeile myös miten ohjelma käyttäytyy, kun "unohdat" tietojen lukemisessa &-merkin muuttujan nimen edestä.) Toteuta ohjelma while rakenteella.
*/