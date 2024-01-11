#include <stdio.h>

int onkokarkausvuosi(int vuosi);

int main(){

    int vuosi;
    scanf("%d", &vuosi);
    onkokarkausvuosi(vuosi);

    return(0);
}

int onkokarkausvuosi(int vuosi){

    if (vuosi % 4 == 0)
    {
        if (vuosi % 100 == 0)
        {
            if (vuosi % 400 == 0)
            {
                printf("Vuosi %d on karkausvuosi", vuosi);
            }
            else{
                printf("Vuosi %d ei ole karkausvuosi", vuosi);
            }
            
        }
        else{
            printf("Vuosi %d on karkausvuosi", vuosi);
        }
    }
    else{
        printf("Vuosi %d ei ole karkausvuosi", vuosi);
    }

    return(0);
}
/*
Karkausvuosi on pääsääntöisesti joka neljäs vuosi, mutta kuitenkin niin, että täydet vuosisadat
(eli sadalla jaolliset vuodet) eivät ole karkausvuosia muulloin kuin joka 400. vuosi
(eli vuosi on jaollinen 400:lla): Esimerkiksi vuodet 1700, 1800 ja 1900 eivät olleet karkausvuosia, mutta 2000 oli. 

Tee ohjelma, joka lukee käyttäjältä vuosiluvun, ohjelma ilmoittaa onko ko. vuosi karkausvuosi.
Käytä karkausvuoden päättelyyn funktiota, joka saa parametrinä tutkittavan vuosiluvun.
Ilmoita tulos käyttäjälle muodossa

Vuosi #### on karkausvuosi
tai
Vuosi #### ei ole karkausvuosi

Poikkeuksellisesti tässä tehtävässä ei tarvitse käyttää taulukoita, vaikka tämä on taulukot-osion tehtävänä.
(Tarkoitus on pohjustaa tehtävää 44, jossa käytetään sitten taulukoitakin.)
*/