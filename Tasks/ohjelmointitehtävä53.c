#include <stdio.h>
#include <string.h>

void etsiMerkkijonoAlusta(char mjono1[100], char mjono2[100], char loydetty[100]) {

    for (int i = 0; i < strlen(mjono1); i++)
    {
        if (mjono1[i] == mjono2[i])
        {
            loydetty[i] = mjono1[i];
        }
    
    }
    loydetty[strlen(loydetty)] = '\0';
}

int main(void) {
    
    char mjono1[100];
    char mjono2[100];
    char loydetty[10]={'\0'};

    scanf("%s", mjono1);
    scanf("%s", mjono2);
    
    etsiMerkkijonoAlusta(mjono1, mjono2, loydetty); 
    printf("%s", loydetty);
    
    return 0;
}

/*
Muokkaa ohjelmaa ja tee siihen funktio nimeltä etsiMerkkijonoAlusta,
joka etsii kahden sanan alusta mahdollisimman pitkiä yhteisiä merkkijonoja ja palauttaa tämän yhteisen merkkijonon kutsujalle.
Esimerkiksi: "global" ja "glossary", pisin yhteinen merkkijono molempien alusta on "glo", ja merkkijonojen "dove" ja "glove" tapauksessa on tuloksena tyhjä merkkijono. 

Lue merkkijonot pääohjelmassa käyttäen scanf -metodia ja tulosta funktion etsiMerkkijonoAlusta palauttama merkkijono pääohjelmassa.
*/