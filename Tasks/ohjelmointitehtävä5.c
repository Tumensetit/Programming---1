/*
/   Ohjelma joka laskee työntekijän netto palkan ja verottajan osuuden työtuntien, tuntipalkan sekä veroprosentin perusteella
/
/
/
/   Tuomas Rahkola
*/

#include <stdio.h>

int main(void){

//kysytään tuntipalkka ja työ tunnit ja kerrotaan ne saadaksemme palkan
    double tuntipalkka, tunnit;
    scanf("%lf", &tuntipalkka);
    scanf("%lf", &tunnit);
    if(tunnit>40)tunnit=(tunnit-40)*1.5+40;         //tässä lisäämme lausekkeen joka saa 40 tunnin jälkeisille tunneille 1,5 tunnin palkan
    double palkka=tunnit*tuntipalkka;

//kysytään käyttäjän vero prosentti
    double veroprosentti;
    scanf("%lf", &veroprosentti);
    
//lasketaan verottajan osuus
    double verottajalle=((veroprosentti/100)*palkka);
    
//lopuksi lasketaan työntekijän osuus ja kerrotaan ne halutulla tavalla
    double tyontekijalle=palkka-verottajalle;
    printf("Nettopalkkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa", tyontekijalle, verottajalle);
}

/*
Suunnittele ja toteuta ohjelma, jossa lasketaan työntekijällle maksettava palkka tuntipalkan, tehtyjen tuntien ja palkasta perittävän veron määrän perusteella.
Tuntipalkka, tehtyjen tuntien määrä, ja veroprosentti kysytään tässä järjestyksessä käyttäjältä.
Lisäksi 40 tuntia ylittäviltä tunneista maksetaan palkkaa 1.5. kertaisena. Ohjelma tulostaa työntekijän ja verottajan osuudet, käytä reaalilukuja (double).

Tulosta molemmat tiedot yhdellä rivillä muodossa:

Nettopalkkasi on ##.## euroa ja verottajan osuus on ##.## euroa
*/