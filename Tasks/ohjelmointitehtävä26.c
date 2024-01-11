#include <stdio.h>

int luku, potenssi, vastaus, laskuri= 1;

int korotakokonaislukupotenssiin();

int main (void){

    scanf("%d", &luku);
    scanf("%d", &potenssi);

    korotakokonaislukupotenssiin();

    printf("Luku %d korotettuna potenssiin %d on %d", luku, potenssi, vastaus);

}

int korotakokonaislukupotenssiin()
{

    vastaus = luku;

        while (laskuri < potenssi)
        {
            laskuri++;
            
            vastaus = vastaus * luku;
        }
    
    return(vastaus);
}


/*
Kirjoita funktio 

korotaKokonaislukuPotenssiin (luku, potenssi)

siten, että se laskee arvon lukupotenssi ja palauttaa arvon kutsujalle. 

Esimerkiksi korotaKokonaislukuPotenssiin(3, 4) laskee tulon 3 * 3 * 3 * 3. Oleta että potenssi on positiivinen nollaa suurempi kokonaisluku ja luku on kokonaisluku.
Älä käytä valmiita kirjastofunktioita potenssiin korotuksessa. Ohjelman tulee toimia int-tietotyypeillä.

Tee myös pääohjelma, jossa luetaan luku ja potenssi ja kutsutaan sitten em. funktiota. Lopuksi tulostetaan tulos muotoiltuna seuraavasti:

Luku # korotettuna potenssiin # on #
*/