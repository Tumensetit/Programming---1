#include <stdio.h>

int luku, palautus, laskuri = 1, piste = 0;

int onkoLukuTaydellinen();

int main(void){

while (luku < 10000)
{
    luku++;
    onkoLukuTaydellinen();

    if(palautus == 1){

        printf("\nLuku %d on taydellinen luku", luku);

    }

}




  return(0);
}

int onkoLukuTaydellinen(){

    laskuri = 1;
    piste = 0;

    for (laskuri = 1, piste = 0; laskuri < luku; laskuri++){

        if (luku % laskuri == 0)
        {
            piste = piste + laskuri;
        }
    }
    
    if ( luku == piste){
        palautus = 1;
    }
    else
    {
        palautus = 0;
    }
    return(palautus);
    
}

/*while (laskuri < luku)

    {
        if (luku % laskuri == 0)
            piste = piste + laskuri;
    }
    if (piste == luku)
        palautus = 1;
        else palautus = 0;

    return (palautus);

    */

/*
Täydellinen luku on positiivinen kokonaisluku, joka on positiivisten tekijöidensä summa.
Tekijöihin ei tällöin lueta lukua itse.
Täydellisia lukuja ovat esimerkiksi 6 ja 28, koska 1 + 2 + 3 = 6 ja 1 + 2 + 4 + 7 + 14 = 28. 

Muokkaa ohjelmakoodia ja lisää siihen funktio onkoLukuTaydellinen, joka tutkii onko sen parametrina saama positiivinen kokonaisluku täydellinen luku.
Funktio palauttaa arvon 1 tai 0, riippuen siitä, onko luku täydellinen vai ei. 

Käytä funktiota pääohjelmassa, joka tutkii luvut 1 - 10000 ja ilmoittaa, mitkä em. luvuista ovat täydellisiä lukuja. 

Ps. jakojäännösoperaattorista % on hyötyä. 
*/