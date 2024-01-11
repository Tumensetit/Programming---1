#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int onko(int luku, int taulukko[]);

int tulostus(int taulukko[]);

int taulukko[20], num = 0;

int main(void)
{

    int i = 0, tarkastus;

    srand(time(0));

    while (i < 20)
    {
        num = rand() % 20 + 1;

        tarkastus = onko(num, taulukko);

        if (tarkastus == 0)
        {
            taulukko[i] = num;

            i++;
        }
    }

    tulostus(taulukko);
}

int onko(int num, int taulukko[]){

    for (int i = 0; i < 20; i++){

        if (num == taulukko[i]){

            return 1;

        }
    }
}

int tulostus(int taulukko[]){

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", taulukko[i]);
    }
    
}

/*
Tee ohjelma, joka täyttää 20 alkion taulukon satunnaisluvuilla, joiden arvot ovat välillä 1 - 20 siten,
että sama luku ei esiinny useammin kuin kerran taulukossa.
Lopputuloksena pitää olla siis 20-paikkainen taulukko, jossa on vain eri lukuja,
ja duplikaattiluvun sijoittaminen taulukkoon pitää estää ja arpoa sen sijasta uusi luku.
Tulosta taulukon sisältö. Käytä funktioita. 
*/