#include <stdio.h>

int tunnit, minuutit, sekunnit, aika, aika1, aikaero_s, aikaero_tunnit, aikero_minuutit, aikaero_sekunnit;

int aikamuutos();

int main(void){

    scanf("%d%d%d", &tunnit, &minuutit, &sekunnit);

    aikamuutos();

    aika1 = aika;

    scanf("%d%d%d", &tunnit, &minuutit, &sekunnit);

    aikamuutos();

    if (aika1 < aika){
        aikaero_s = aika - aika1;
        aikaero_tunnit = (aikaero_s/3600);
        aikero_minuutit = (aikaero_s - (3600 * aikaero_tunnit)) / 60;
        aikaero_sekunnit = (aikaero_s - (3600 * aikaero_tunnit) - (aikero_minuutit * 60));
    }
    else{
        aikaero_s = aika1 - aika;
        aikaero_tunnit = (aikaero_s/3600);
        aikero_minuutit = (aikaero_s - (3600 * aikaero_tunnit)) / 60;
        aikaero_sekunnit = (aikaero_s - (3600 * aikaero_tunnit) - (aikero_minuutit * 60));
    }

    printf("Aikaero on: %d sekuntia\n", aikaero_s);
    printf("Aika on %d tuntia %d minuuttia %d sekuntia", aikaero_tunnit, aikero_minuutit, aikaero_sekunnit);

}

int aikamuutos(){

    tunnit = tunnit * 3600;

    minuutit = minuutit * 60;

    aika = tunnit + minuutit + sekunnit;
}



/*
Kirjoita funktio, joka saa parametrinä kolme kokonaislukua, parametrit kuvaavat kellonaikaa, tunteja, minuutteja ja sekunteja.
Funktio palauttaa syötetyn ajan sekunneiksi muutettuna.
Käytä tätä funktiota ohjelmassa, jossa luetaan kaksi kellonaikaa ja lasketaan aikojen välinen erotus, joka tulostetaan kuvaruudulle kahdessa muodossa 
(sekä pelkkinä sekunteina että muutettuna takaisin tunnit minuutit sekunnit -muotoon):

Aikaero on: #### sekuntia
Aika on # tuntia # minuuttia # sekuntia
*/