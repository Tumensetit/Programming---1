#include <stdio.h>
#include <string.h>

char omaStrcmp(char *p1, char *p2){

    for (int i = 0; i < strlen(p1); i++)
    {
        if (p1[i] > p2[i])
        {
            return 1;
        }

        if (p1[i] < p2[i])
        {
            return -1;
        }
        
    }
    
    if (strlen(p1) == strlen(p2))
    {
        return 0;
    }
    
    if (strlen(p1) > strlen(p2))
    {
        return 1;
    }
    else
        return -1;
}

int main(void){

    char mjono1[100];
    char mjono2[100];
    int result;

    scanf("%s", mjono1);
    scanf("%s", mjono2);

    result = omaStrcmp(mjono1, mjono2);

    if (result == 0)
    {
        printf("%s == %s", mjono1, mjono2);
    }

        if (result > 0)
    {
        printf("%s > %s", mjono1, mjono2);
    }

        if (result < 0)
    {
        printf("%s < %s", mjono1, mjono2);
    }
    
}

/*
Kirjoita oma versio funktiosta strcmp, joka saa parametrinaan kaksi merkkiosoitinta.
Nimeä oma funktiosi nimellä omaStrcmp(). Älä käytä siinä valmista kirjastofunktiota merkkijonojen vertailuun.

Tee ohjelma, jossa luetaan kaksi merkkijonoa (esimerkissä alla abcd tai abce tai abcf), joita sitten verrataan aakkosjärjestyksen suhteen ko.
funktiolla. Vastauksena tulostetaan käyttäjän syöttämät merkkijonot yhdistettynä sopivalla vertailuoperaatorimerkillä:

abcd == abcd
tai

abce > abcd
tai

abcd < abcf
tai
abYikE < abZiiA
*/