#include <stdio.h>
#include <string.h>

typedef struct
{
    char kaupunki[30];
    char nimi[30];
    int voitot;
    int tappiot;
    int erotus;
}joukkue;

joukkue luejoukkueentiedot(void);
void tulostajoukkueentiedot(joukkue joku, int n);
void lajittelejoukkueet(joukkue * rekisteri, int n);
void lueRoskat(void);

int main(void){

    int joukkuemaara;
    scanf ("%d", &joukkuemaara);
    joukkue rekisteri[joukkuemaara];
    lueRoskat();

    for (int i = 0; i < joukkuemaara; i++)
    {
        fflush(stdin);
        rekisteri[i] = luejoukkueentiedot();
        fflush(stdin);
    }
    lueRoskat();

    lajittelejoukkueet(rekisteri, joukkuemaara);

    printf("****************************************\n");
    printf("         TULOSLISTA\n");
    printf("****************************************\n");
    
    for (int i = 0; i < joukkuemaara; i++)
    {
        tulostajoukkueentiedot(rekisteri[i], i);
    }
    
    return 0;
}

joukkue luejoukkueentiedot(void){

    joukkue joku;

    fflush(stdin);
    
    scanf("%s", joku.kaupunki);
    scanf("%s", joku.nimi);
    scanf("%d", &joku.voitot);
    scanf("%d", &joku.tappiot);
    joku.erotus = joku.voitot - joku.tappiot;

    fflush(stdin);

    return(joku);
}

void lajittelejoukkueet(joukkue * rekisteri, int n){

    joukkue temp;
    int paikka;
    int i, j;

    for (i = 0; i < n; i++)
    {
        paikka = i;

        for (j = i + 1; j < n; j++)
        {
            if (rekisteri[j].erotus > rekisteri[paikka].erotus)
            {
                paikka = j;
            }

        }

        if (paikka != i)
        {
            temp = rekisteri[paikka];
            rekisteri[paikka] = rekisteri[i];
            rekisteri[i] = temp;
        }
    
    }

}

void tulostajoukkueentiedot(joukkue joku, int i){

    printf("\n%d. joukkue:\t%s %s tilanne: %d voittoa ja %d tappiota", i+1, joku.kaupunki, joku.nimi, joku.voitot, joku.tappiot);

}

void lueRoskat(void){
   while( fgetc(stdin) != '\n');
}

/*
Kirjoita ohjelma, joka tallettaa tietoja jääkiekkojoukkueista.
Ohjelma kysyy ensiksi käyttäjältä joukkueiden määrän.
Sen jälkeen jokaisesta joukkueesta luetaan seuraavat tiedot:

Joukkueen nimi, sisältäen kotipaikan nimen (esim. Oulun Kärpät)
Voittojen määrä
Tappioiden määrä
Ohjelma lukee tiedot ja tallettaa ne tietueeseen.
Tämän jälkeen ohjelma lajittelee listan joukkueiden voittojen ja häviöiden perusteella (= voittojen määrä - häviöitten määrä)
ja tulostaa tiedot paremmuusjärjestyksessä seuraavasti muotoiltuna:

****************************************
         TULOSLISTA
****************************************

 1. joukkue:          Tiimi1 tilanne: # voittoa ja # tappiota
 2. joukkue:          Tiimi2 tilanne: # voittoa ja # tappiota
    
Järjestelyyn voit käyttää erillistä funktiota, josta on malli annettu tehtävän 62 yhteydessä (voit joutua hieman sitä muokkaamaan tämän tehtävän tarkoitukseen).
*/