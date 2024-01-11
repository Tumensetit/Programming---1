#include <stdio.h>

double laskeParkkiMaksu( int luku );

int main(void){

    double v1, v2, v3, v_all;
    double a1, a2, a3, a_all;

    scanf("%lf", &a1);
    scanf("%lf", &a2);
    scanf("%lf", &a3);

    v1 = laskeParkkiMaksu ( a1 );
    v2 = laskeParkkiMaksu ( a2 );
    v3 = laskeParkkiMaksu ( a3 );

    v_all = v1 + v2 + v3;
    a_all = a1 + a2 + a3;

    printf("    Asiakas      Tunnit    Veloitus\n");
    printf("          1%12.2lf%12.2lf\n", a1, v1);
    printf("          2%12.2lf%12.2lf\n", a2, v2);
    printf("          3%12.2lf%12.2lf\n", a3, v3);
    printf("   YHTEENSA%12.2lf%12.2lf", a_all, v_all);
}
 
double laskeParkkiMaksu( int luku ) {

    double veloitus;

    if(luku<=3)
        veloitus = 2;

    else if (luku>=19)
        veloitus = 10;

    else if ( luku<19 & luku>3)
        veloitus = (luku - 3) * 0.5 + 2;

    return(veloitus);
}

/*
Kallioparkki veloittaa 2 euroa yhteensä kolmelta ensimmäiseltä pysäköintitunnilta (Huom! ei siis 2€/h, vaan 2€/3h).
Yli kolmen tunnin pysäköinnistä veloitetaan lisäksi 0.5 euroa jokaiselta yli menevältä tunnilta (eli +0,5€/h).
Kuitenkin maksimiveloitus on 10 euroa 24 tunnilta.
Tee ohjelma, joka kysyy kolmen asiakkaan pysäköintiajat, laskee kunkin veloitukset ja tulostaa tulokset alla olevassa muodossa:


    Asiakas      Tunnit    Veloitus
          1        #.##        #.##
          2        #.##        #.##
          3        #.##        #.##
   YHTEENSA        #.##        #.##

Ohjelmassa on käytettävä funktiota laskeParkkiMaksu laskemaan kunkin asiakkaan maksu. 
*/