#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int kysymerkkijono(char merkkijono[]);

int main(void){

    int a;

    char merkkijono1[21], merkkijono2[21], merkkijono3[21], merkkijono4[21], merkkijono5[21];
    fgets(merkkijono1, 21, stdin);
    fgets(merkkijono2, 21, stdin);
    fgets(merkkijono3, 21, stdin);
    fgets(merkkijono4, 21, stdin);
    fgets(merkkijono5, 21, stdin);

    a = atoi(merkkijono1);

    printf("%d", a);

}

/*
Kirjoita ohjelma, joka lukee viisi merkkijonoa ja tulostaa ne merkkijonot, jotka alkavat kirjaimellä 'a' Tulosta vastaukset muodossa:

"a"-merkilla alkava merkkijono "asdfghjk"

Esimerkkiajo:

Anna merkkjono (max 100 merkkia) > aku

Anna merkkjono (max 100 merkkia) > ankka

Anna merkkjono (max 100 merkkia) > Aku

Anna merkkjono (max 100 merkkia) > Ankka

Anna merkkjono (max 100 merkkia) > Roope

"a"-merkilla alkava merkkijono "aku"

"a"-merkilla alkava merkkijono "ankka"
*/