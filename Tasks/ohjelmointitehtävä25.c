#include <stdio.h>
#include <math.h>

double laskeHypotenuusa();

    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;

int main() {
    
   
    
    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);
    
    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);
    
    laskeHypotenuusa();

    printf("%lf", hypotenuusa);

    return 0;
}

double laskeHypotenuusa()
{
    
    hypotenuusa = sqrt((sivu1 * sivu1) + (sivu2 * sivu2));
    
    return(hypotenuusa);
}

/*
Täydennä ohjelmakoodi ja lisää siihen funktio laskeHypotenuusa, joka laskee suorakulmaisen kolmion hypotenuusan pituuden.
Funktio saa parametrinä kaksi reaalilukua, jotka esittävät kolmion kahta muuta sivua.
Funktio palauttaa reaalilukuna laskemansa hypotenuusan arvon, joka tulostetaan main-funktiossa.

Hypotenuusan laskemista ei saa toteuttaa main-funktiossa.
*/