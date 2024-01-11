#include <stdio.h>

int main(void){
    
    int laskuri1 = 0, laskuri2 = 0, tarkastus, luku, lukuja [20];

    while (laskuri1 < 20)
    {
        scanf("%d", &luku);

        if (luku>9 && luku<101)
        {
            printf("%d. ", laskuri1 + 1);

            lukuja [laskuri1] = luku;

            laskuri1++;
        }
        
    }
    laskuri1 = 0;
    int l = 20;
    for (laskuri1 = 0;laskuri1 < l; laskuri1++)
    {
        for (laskuri2 = 0; laskuri2 < l; laskuri2++)
        {

            if (lukuja[laskuri1] == lukuja[laskuri2] && laskuri1 != laskuri2)
            {
                break;
            }
            
        }

        if (laskuri2 == l)
            {
                printf("\n%d ", lukuja[laskuri1]);
            }

        
    }
}
/*
    int i = 0;
    int j = 0;
    int laskuri = 0;
    int l = 20;

  for (i = 0; i < l; i++)
  {
    for (j = 0; j < l; j++)
      if (lukuja[i] == lukuja[j] && i != j)
        break;
    if (j == l)
      printf("%d ", lukuja[i]);
  }



*/
/*
Kirjoita ohjelma, jossa luetaan 20 lukua, joiden arvot ovat välillä 10 ... 100.
Kun taulukko on täytetty, ohjelma tulostaa vain ne taulukon arvot, jotka esiintyvät vain kerran.
Esimerkki ohjelman ajosta:

Syötä 1. luku >##
Syötä 2. luku >###

Ei kelpaa!
Yrita uudelleen > ##
Syötä 3. luku >#

Ei kelpaa!
Yrita uudelleen > ##
Syötä 4. luku >##
*/