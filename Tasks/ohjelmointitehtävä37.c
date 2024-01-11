#include <stdio.h>

int paivienLukumaaraKuukaudessa (int kk);

int main(void){
    int kk, paivienmaara;
    scanf("%d", &kk);
    paivienmaara = paivienLukumaaraKuukaudessa(kk);
    if (paivienmaara == -1)
    {
        printf("Kuukautta %d ei ole olemassa", kk);
    }
    else
        printf("Kuukaudessa %d on %d paivaa", kk, paivienmaara);
}

int paivienLukumaaraKuukaudessa (int kk){

    int paivienmaara, paivienmaarataulukko [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (kk > 0 && kk < 13)
    {
        paivienmaara = paivienmaarataulukko[kk-1];
    }
    else{
        paivienmaara = -1;
    }
    return(paivienmaara);
}

/*
Kirjoita funktio, joka saa parametrinä kuukauden järjestysnumeron (1-12), funktio laskee ko.
kuukauden päivien lukumäärän ja palauttaa arvon kutsujalle.
Virheellisen kuukauden numeron yhteydessä funktio palauttaa arvon -1. Funktion esittely on:

int paivienLukumaaraKuukaudessa (int kk);

Kuukaudessa on päiviä seuraavasti:


Tammikuu	31
Maaliskuu	31
 Toukokuu	 31
 Heinäkuu	 31
 Elokuu	 31
 Lokakuu	 31
 Joulukuu	 31
 Helmikuu	 28
 Huhtikuu	 30
 Kesäkuu	 30
 Syyskuu	 30
 Marraskuu	 30
(Toistaiseksi unohdetaan karkausvuosien helmikuut.)

Kirjoita funktiolle pääohjelma, joka kysyy käyttäjältä kuukauden ja tulostaa annetun kuukauden päivien lukumäärän muodossa

Kuukaudessa ## on ## paivaa
tai

Kuukautta ## ei ole olemassa
*/