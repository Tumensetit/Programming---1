#include <stdio.h>
#include <string.h>

char mystrcpy( char *ptr1, char *ptr2){

    for (int i = 0; i < strlen(ptr2); i++)
    {
        ptr1[i] = ptr2[i];
    }
    ptr1[strlen(ptr2)] = '\0';
    
    return *ptr1;
}

char mystrcat(char *ptr1, char *ptr2){

    int pituus1, pituus2;
    pituus1 = strlen(ptr1);
    pituus2 = strlen(ptr2);
    int kokopituus = pituus1 + pituus2;
    for (int i = 0; i < pituus2; i++)
    {
        ptr1[pituus1 + i] = ptr2[i];
    }
    ptr1[kokopituus] = '\0';

    return *ptr1;
}

/*
Kirjoita vaadittuun tiedostoon omatfunktiot.c omat versiosi funktioista strcpy ja strcat, jotka saavat parametrinaan kaksi merkkiosoitinta.
Nimeä funktiot nimillä mystrcpy ja mystrcat . Alkuperäisten funktioiden määritelmät: strcpy ja  strcat.

Funktiota testaan kutsumalla niitä valmiista pääohjelmasta (tehtävässä valmiina).
Toteuta vain nuo kaksi edellä mainittua omaa funktiotasi tiedostoon omatfunktiot.c.
Jos haluat, niin voit tehdä omalle koneellesi testausta varten lyhyen main-funktion, mutta ÄLÄ PALAUTA TÄHÄN TEHTÄVÄÄN MAIN-FUNKTIOTA!
Se tulee tarkastimelta automaattisesti.

Omien funktioittesi esittelyt on mainin yhteydessä jo määritelty seuraavanlaisiksi:

char* mystrcpy(char* kohde, const char* lahde);
char* mystrcat(char* kohde, char* lahde);

*/