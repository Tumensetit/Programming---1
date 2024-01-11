/*
/   Ohjelma joka laskee työntekijän netto palkan ja verottajan osuuden työtuntien, tuntipalkan sekä veroprosentin perusteella
/
/
/
/
/   Tuomas Rahkola
*/
#include <stdio.h>

int main(void){

//kysytään tuntipalkka ja työ tunnit ja kerrotaan ne saadaksemme palkan
    double tuntipalkka, tunnit;
    scanf("%lf", &tunnit);
    scanf("%lf", &tuntipalkka);
    double palkka=tunnit*tuntipalkka;
    
//kysytään käyttäjän vero prosentti
    double veroprosentti;
    scanf("%lf", &veroprosentti);
    
//lasketaan verottajan osuus
    double verottajalle=((veroprosentti/100)*palkka);
    
//lopuksi lasketaan työntekijän osuus ja kerrotaan ne halutulla tavalla
    double tyontekijalle=palkka-verottajalle;
    printf("Nettopalkkasi on %.2lf euroa josta veron osuus on %.2lf euroa", tyontekijalle, verottajalle);
}



/*
/Suunnittele ja toteuta ohjelma, jossa lasketaan työntekijälle maksettava palkka tehtyjen tuntien ja tuntipalkan perusteella ja palkasta perittävän veron määrän.
/ Tehtyjen tuntien määrä, tuntipalkka ja veroprosentti kysytään käyttäjältä.
/
/Verottajan osuus saadaan laskemalla kaavasta: (veroprosentti/100.0) *  bruttopalkka
/
/Ohjelma tulostaa työntekijän ja verottajan osuudet, käytä reaalilukuja (double).
/
/Tulosta molemmat tiedot yhdellä rivillä muodossa:
/
/Nettopalkkasi on ##.## euroa josta veron osuus on ##.## euroa
*/