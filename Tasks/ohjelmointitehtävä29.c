#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int kruunu, klaava, laskuri = 0, returni;

int heitakolikko();

int rand();



int main(void){
srand (time(NULL));
    while (laskuri < 100)
    {
        laskuri++;

        heitakolikko();

        if (returni == 0){
            kruunu++;
        }
        else if (returni == 1){
            klaava++;
        }
    }   
    
    printf("Heittojen tulos: %d kruunua ja %d klaavaa", kruunu, klaava);

    
}

int heitakolikko(){

    

    returni = rand() % 2;

    return(returni);
}
/*
Kirjoita ohjelma, joka simuloi rahan heittoa. Ohjelma "heittää" rahaa 100 kertaa ja kirjaa tulokset ylös ja tulostaa kruunujen ja klaavojen lukumäärät.
Rahan heitto tulee toteuttaa funktiolla, joka palauttaa luvun 0, jos heiton tulos on kruunu ja luvun 1, jos heiton tulos on klaava.
Rahan heittoon voi käyttää satunnaislukufunktiota rand, joka löytyy kirjastosta stdlib.h.
Satunnaislukufunktio "alustetaan" ennen käyttöä komennolla srand (time(NULL)), jossa time -löytyy kirjastosta time.h.

Tulosta heittojen tulokset yhdellä rivillä muodossa:

Heittojen tulos: ### kruunua ja ### klaavaa
*/