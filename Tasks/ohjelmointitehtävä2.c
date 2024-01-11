/*
/   Ohjelma joka laskee käyttäjän palkan syötetyllä tuntipalkalla ja tunneilla
/   
/
/
/   Tuomas Rahkola
*/
#include <stdio.h>

int main(void){

//pyydetään tuntipalkka

    int tuntipalkka;
    
    scanf("%d", &tuntipalkka);
    
//pyydetään tunnit

    int tunnit;
    
    scanf("%d", &tunnit);

//kerrotaan palkka käyttäen syötettyjä tuntipalkka ja tunti arvoja

    int palkka;
    printf("Bruttopalkkasi on %d euroa\n", palkka=tuntipalkka*tunnit );

    return(0);
}


/*Suunnittele ja toteuta ohjelma, jossa lasketaan työntekijälle maksettava palkka tehtyjen tuntien ja tuntipalkan perusteella. Tehtyjen tuntien määrä ja tuntipalkka kysytään käyttäjältä, ohjelmassa käytetään kokonaislukuja.

Esimerkki (#-merkit ovat joko käyttäjän syöttämiä tai ohjelman tulostamia numeroita):

Anna tuntipalkka > ###
Tehdyt tunnit > ##
Bruttopalkkasi on ##### euroa*/