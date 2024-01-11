#include <stdio.h>

int main(void){

    int pisteet;
    scanf("%d", &pisteet);

    if(pisteet<12 & pisteet>=0)
    printf("Hylatty");

    else if(pisteet<14 & pisteet>11)
    printf("1");

    else if(pisteet<17 & pisteet>13)
    printf("2");

    else if(pisteet<20 & pisteet>16)
    printf("3");

    else if(pisteet<23 & pisteet>19)
    printf("4");

    else if(pisteet<25 & pisteet>22)
    printf("5");

    else if(pisteet<0)
    printf("Virheellinen pistemaara");
        
    else if(pisteet>24)
    printf("Virheellinen pistemaara");
}


/*
Suunnittele ja toteuta ohjelma, joka kysyy kokeesta saadun pistemäärän ja tulostaa vastaavan arvosanan. Käytä hyväksesi if -valintarakennetta. Arvosanat määräytyvät seuraavasti:

0 - 11  Hylatty
12 - 13  1
14 - 16  2
17 - 19  3
20 - 22  4
23 - 24  5
muut: Virheellinen pistemaara
*/