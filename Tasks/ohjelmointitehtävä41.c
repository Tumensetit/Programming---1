#include <stdio.h>

int suurinarvo(int lukuja[]);

int keskiarvo(int lukuja[]);

int main(void){

    int laskuri1 = 0, luku, lukuja [10], i;

    while (laskuri1 < 10)
    {
        fflush ( stdin );

        printf("%d. ", laskuri1 + 1);

        scanf("%d", &luku);

        if (luku >= 0 && luku < 101)
        {
            lukuja [laskuri1] = luku;

            laskuri1++;
        }  
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", lukuja[i]);
    }

    suurinarvo(lukuja);

    keskiarvo(lukuja);
}

int suurinarvo(int lukuja[]){

    int i, j, suurinarvo;

    for (i = 0, j= 0; i < 10; i++)
    {
        if (lukuja[i] > lukuja[j])
        {
            suurinarvo = lukuja[i];
            j = i;
        }
    }

    printf("\nSuurin arvo on %d, ja se sijaitsee paikassa %d", suurinarvo, j);

    return 0;
}

int keskiarvo(int lukuja[]){

    int i;
    double keskiarvo, p=0;

    for (i = 0; i < 10; i++)
    {
        p = p + lukuja[i];
    }
    
    keskiarvo = p / 10;

    printf("\nTaulukon arvojen keskiarvo on %.3lf", keskiarvo);

    return 0;
}
/*
Kirjoita ohjelma, jossa luetaan kokonaislukuja taulukkoon jossa on 10 paikkaa.

Luettu luku talletetaan taulukkoon, jos luettu luettu luku on välillä 0 - 100, muut arvot hylätään,
mutta tästä huolimatta taulukon jokaiseen soluun on talletettava luku.
Mikäli luettu luku hylätään, pyydetään uutta lukua niin kauan että annettu luku on hyväksyttävä.
Uuden luvun kysymisessä tulee tulostaa uudestaan kysyttävän luvun järjestysnumero:
Esimerkki:
        Anna 1. kokonaisluku > 123
          Ei kelpaa, anna 1. kokonaisluku uudestaan > 12
        Anna 2. kokonaisluku > 33
        ...jne
        

Ohjelma tulostaa taulukon sisällön kuvaruudulle vaakasuoraan yhdelle riville.
Ohjelmassa etsitään taulukosta suurimman arvon indeksinumero taulukossa ja tulostetaan suurin arvo ja indeksinumero kuvaruudulle omalle rivilleen. 
Ohjelma laskee taulukon arvojen keskiarvon ja tulostaa sen kolmen desimaalin tarkkuudella kuvaruudulle omalle rivilleen. 
Toteuta taulukon täyttäminen, tulostaminen ja suurimman arvon indeksin haku ja keskiarvon laskenta omina funktioina. 

Esimerkkiajo:

Anna 1. kokonaisluku > #

Anna 2. kokonaisluku > #

Anna 3. kokonaisluku > #

Anna 4. kokonaisluku > #

Anna 5. kokonaisluku > #

Anna 6. kokonaisluku > #

Anna 7. kokonaisluku > #

Anna 8. kokonaisluku > #

Anna 9. kokonaisluku > ##

Anna 10. kokonaisluku > #

Taulukon:
# # # # # # # # ## #

Suurin arvo on ##, ja se sijaitsee paikassa #

Taulukon arvojen keskiarvo on #.###

*/