#include <stdio.h>

int main(void){

int palindromi1, palindromi2, toisinpain = 0, yli;
    scanf("%d", &palindromi1);
    palindromi2 = palindromi1;

if(palindromi1 >= 10000 && 99999 >= palindromi1){

        while (palindromi1 != 0) {
            yli = palindromi1 % 10;
            toisinpain = toisinpain * 10 + yli;
            palindromi1 /= 10;
}
        if(palindromi2 == toisinpain)
            printf("Luku %d on palindromi", palindromi2);


        else
            printf("Luku %d ei ole palindromi", palindromi2);
}


    else
        printf("Syote ei ole viisinumeroinen positiivinen kokonaisluku");


}
/*
Palindromi on luku tai teksti, joka on sama, luettiin se etuperin tai takaperin. Tee ohjelma, joka tutkii onko käyttäjän syöttämä viisinumeroinen positiivinen kokonaisluku palindromi.
-Ohjelma kertoo tuloksen joko lauseella

Luku # on palindromi
tai

Luku # ei ole palindromi
Jos syöte ei ole viisinumeroinen positiivinen kokonaisluku, siitä kerrotaan käyttäjälle eikä palindromitutkimista suoriteta:

Syote ei ole viisinumeroinen positiivinen kokonaisluku
*/