#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero1, numero2, vastaus = 0, muisti;

int tarkastus();

int main(){

    srand(time(0));

    while (vastaus != -1)
    {
        numero1 = rand() % 9 + 1;
        numero2 = rand() % 9 + 1;
        printf("Anna luku -1 lopettaaksesi\nPaljonko on %d kertaa %d?\n", numero1, numero2);

        scanf("%d", &vastaus);
        
        tarkastus();

        if (vastaus == numero1 * numero2)
        {
           printf("Oikein!\n");
        }  
    }

    return(0);
}

int tarkastus(){

    if (vastaus != -1){
                
        if (vastaus != numero1 * numero2){
            muisti = 0;
            printf("Väärin, yritä uudelleen\n");

        }
        else
            muisti = 1;

    }
    else
        muisti = 1;

}

/*
Kirjoita ohjelma, joka auttaa ala-asteen oppilaita laskemaan kertolaskuja luvuilla 1 - 9.
Ohjelma esittää kysymyksen, johon käyttäjä vastaa. Kysymykset ovat muotoa:

Anna luku -1 lopettaaksesi
Paljonko on 5 kertaa 3? 15
Oikein!

if (vastaus == numero1 * numero2)
        {
            printf("Oikein!")
        }
        else (printf("Väärin, yritä uudelleen"))

Anna luku -1 lopettaaksesi
Paljonko on 9 kertaa 7? 62
Väärin, yritä uudelleen > 63
Oikein!


Ohjelma tutkii onko vastaus oikein vai väärin ja antaa palautteen.
Jos vastaus on väärä, ohjelma esittää saman kysymyksen uudelleen, kunnes vastaus on oikea.
Käytä satunnaislukuja tehtävien tuottamiseen.
Ohjelman suoritus päättyy, kun käyttäjä syöttää luvun -1. 
*/