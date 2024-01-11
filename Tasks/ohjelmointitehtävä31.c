#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero1, numero2, vastaus = 0, muisti, laskupaatos;

int kertolaskutarkastus();

int jakolaskutarkastus();

int main(){
srand(time(0));
    
    laskupaatos = rand() % 2;

    

    if (laskupaatos == 1){

        while (vastaus != -1)
        {
            numero1 = rand() % 9 + 1;
            numero2 = rand() % 9 + 1;
            printf("Anna luku -1 lopettaaksesi\nPaljonko on %d kertaa %d?\n", numero1, numero2);

            scanf("%d", &vastaus);
        
            kertolaskutarkastus();

            if (vastaus == numero1 * numero2)
            {
               printf("Oikein!\n");
            }  
        }
    }

    if (laskupaatos == 0){
    
        while (vastaus != -1)
        {
            numero1 = rand() % 9 + 1;
            numero2 = rand() % 9 + 1;
            printf("Anna luku -1 lopettaaksesi\nPaljonko on %d jaettuna %d?\n", numero1*numero2, numero1);

            scanf("%d", &vastaus);

            jakolaskutarkastus();

            if (vastaus == numero2)
            {
                printf("Oikein!\n");
            }
        }

    }
    return(0);
}

int kertolaskutarkastus(){

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

int jakolaskutarkastus(){

    if (vastaus != -1)
    {
        if (vastaus != numero2)
        {
            printf("Väärin, yritä uudelleen\n");
        }
        
    }
    
}

/*
Kirjoita ohjelma, joka arpoo satunnaisesti ala-asteen oppilaille joko kertolaskutehtäviä (luvuilla 1-9) tai jakolaskutehtäviä.
Kerto- vai jakolasku -valinta pitää ohjelman arpoa satunnaisesti.
Jakolaskutehtävien tulee olla sellaisia, että tuloksena on kokonaisluku (hyödynnä kertolaskualgoritmia edellisestä kohdasta).
Ohjelma esittää kysymyksen, johon käyttäjä vastaa. Kysymykset ovat muotoa:

Anna luku -1 lopettaaksesi
Paljonko on 5 kertaa 3? 15
Oikein!

Anna luku -1 lopettaaksesi
Paljonko on 9 kertaa 7? 62
Väärin, yritä uudelleen > 63
Oikein!


Ohjelma tutkii onko vastaus oikein vai väärin ja antaa palautteen.
Jos vastaus on väärä, ohjelma esittää saman kysymyksen uudelleen, kunnes vastaus on oikea.
Käytä satunnaislukuja tehtävien tuottamiseen.
Ohjelman suoritus päättyy, kun käyttäjä syöttää luvun -1. 
*/