#include <stdio.h>

int main(void){

    int pisteet;
    scanf("%d", &pisteet);

    switch (pisteet)
    {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        printf("Hylatty");
        break;

    case 12: case 13:
        printf("1");
        break;

    case 14: case 15: case 16:
        printf("2");
        break;

    case 17: case 18: case 19:
        printf("3");
        break;

    case 20: case 21: case 22:
        printf("4");
        break;

    case 23: case 24:
        printf("5");
        break;
    
    default:
        printf("Virheellinen pistemaara");
        break;
    }
}



/*
Suunnittele ja toteuta ohjelma, joka kysyy kokeesta saadun pistemäärän ja tulostaa vastaavan arvosanan. Käytä hyväksesi switch-valintarakennetta. Arvosanat määräytyvät seuraavasti:

0 - 11  Hylatty
12 - 13  1
14 - 16  2
17 - 19  3
20 - 22  4
23 - 24  5
muut: Virheellinen pistemaara
*/