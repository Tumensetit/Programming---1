/*
/   Ohjelma joka laskee asiakkaan korot laina-ajalta käyttäen lainasummaa, korkoa ja päivien määrää jotka saadaan käyttäjältä
/
/
/
/
/   Tuomas Rahkola
/
*/

#include <stdio.h>

int main(void){

//kysytään käyttäjältä lainasumma, korko sekä päivien määrä

    double lainasumma, lainakorko;
    
    scanf("%lf", &lainasumma);
    scanf("%lf", &lainakorko);
    
    int paivienmaara;

    scanf("%d", &paivienmaara);

//muutetaan korko prosenteiksi 
    double korko=lainakorko/100;

//seuraavaksi kaava kokonaiskorolle
    double kokonaiskorko=lainasumma*korko*paivienmaara/365;

//lopuksi kerrotaan käyttäjälle tulos
    printf("Lainapaaoman %.2lf euroa korko %d paivalta korkoprosentilla %.2lf on yhteensa %.2lf euroa.", lainasumma, paivienmaara, lainakorko, kokonaiskorko);

}

/*
Tee ohjelma, joka lukee käyttäjältä lainasumman, lainakoron ja lainapäivien määrän, tässä järjestyksessä . Ohjelma laskee paljonko asiakas joutuu maksamaan korkoa laina-ajalta. 

Kaava: kokonaiskorko = laina * korko * lainapäivät/365

jossa "korko" on käyttäjän syöttämä luku (esim. 15 viidentoista prosentin korolle) jaettuna 100:lla, eli muutettuna prosenteiksi.

Tulosta vastaus muodossa:

Lainapaaoman #.## euroa korko # paivalta korkoprosentilla #.## on yhteensa #.## euroa.
*/