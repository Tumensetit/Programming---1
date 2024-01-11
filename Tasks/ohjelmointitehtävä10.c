#include <stdio.h>

int main(void){

    int luku1, luku2, luku3, luku4, luku5, luku6, luku7, luku8, luku9, luku10;
    luku1=1;

    luku2=2;

    luku3=3;

    luku4=4;

    int laskuri;

    laskuri=0;

    printf("N      10*N   100*N  1000*N\n");

    do{
        luku2=luku1*10;
        luku3=luku1*100;
        luku4=luku1*1000;
        printf("%d      %d     %d    %d\n", luku1, luku2, luku3, luku4);
        luku1=luku1+1;
        laskuri=laskuri+1;
    }
        while (laskuri < 10);
}








/*
Suunnittele ja toteuta ohjelma, joka tulostaa alla olevan taulukon hyödyntäen toistorakennetta (do-while, while, tai for-rakennetta).
Taulukkoa ei siis saa "kovakoodata", eli ohjelmassa saa olla vain yksi printf-lause otsikkorivin tulostusta varten ja vain yksi printf-lause kaikkien taulukkorivien tulostukseen!

Huomaa, että...

Tehtävä katsotaan hyväksytyksi vasta, kun se täyttää yllä annetut ehdot (vaikka tarkastin hyväksyisi kovakoodatun ratkaisun).
Arvojen tulostukseen varataan tilaa seitsemälle numerolle.
Tulostus tulee tasata vasempaan reunaan (katso tarkasti esimerkkitaulukkoa).

N      10*N   100*N  1000*N
1      10     100    1000
2      20     200    2000
3      30     300    3000
4      40     400    4000
5      50     500    5000
6      60     600    6000
7      70     700    7000
8      80     800    8000
9      90     900    9000
10     100    1000   10000
*/