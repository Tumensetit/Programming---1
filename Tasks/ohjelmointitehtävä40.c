#include <stdio.h>

int kopioi(int lukuja[]);

int main(void){
    
    int laskuri1 = 0, tarkastus, luku, lukuja [10], i;
    int kopio[10];

    while (laskuri1 < 10)
    {
        printf("%d. ", laskuri1 + 1);

        scanf("%d", &luku);

        lukuja [laskuri1] = luku;

        laskuri1++;
        
    }

    kopioi(lukuja);
}

int kopioi(int lukuja[]){

    int i, j=0, l=9;
    int kopio[10];

    for (i = 0; i < 10; i++)
    {
        kopio[j] = lukuja[l];
        j++;
        l--;
    }
        for (i = 0; i < 10; i++)
    {
        printf("%d %d\n", lukuja[i], kopio[i]);
    }

    return(0);
}
/*
Tee ohjelma, jossa on kaksi samankokoista kokonaislukutaulukkoa.
Ohjelma lukee käyttäjältä 10 lukua toiseen taulukoista ja kopioi sitten luvut toiseen samankokoiseen taulukkoon käänteisessä järjestyksessä
eli ensimmäinen luku viimeiseen paikkaan ja viimeisin luku ensimmäiseen paikkaan jne.
Lopuksi ohjelma tulostaa molempien taulukoiden sisällöt kahtena vierekkäisenä "sarakkeena":
int kopioi(int lukuja[10]);
Syötä 1. luku >##
Syötä 2. luku >###
Syötä 3. luku >#
Syötä 4. luku >##
Syötä 5. luku >##
Syötä 6. luku >##
Syötä 7. luku >##
Syötä 8. luku >##
Syötä 9. luku >##
Syötä 10. luku >##
##   ##
###  ##
#    ##
##   ##
##   ##
##   ##
##   ##
##   #
##   ###
##   ##
*/