#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char jono[5][100];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", jono[i]);
    }

    for(int j = 0; j < 5; j++){
        if(jono[j][strlen(jono[j]) - 1] == 'n' && jono[j][strlen(jono[j]) - 2] == 'e' && jono[j][strlen(jono[j]) - 3] == 'n')
        printf("en-merkkijonoon paattyva merkkijono  %s\n", jono[j]);
    }
}

/*
Kirjoita ohjelma, joka lukee viisi merkkijonoa ja tulostaa ne merkkijonot, jotka päättyvät kirjaimiin "en". Tulosta vastaukset muodossa:

en-merkkijonoon paattyva merkkijono adfadsfasdnen
Esimerkkiajo:

Anna merkkjono (max 100 merkkia) > sana

Anna merkkjono (max 100 merkkia) > sananen

Anna merkkjono (max 100 merkkia) > jono

Anna merkkjono (max 100 merkkia) > aurinkoinen

Anna merkkjono (max 100 merkkia) > merkki

en-merkkijonoon paattyva merkkijono sananen

en-merkkijonoon paattyva merkkijono aurinkoinen
*/