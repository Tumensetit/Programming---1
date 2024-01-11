#include <stdio.h>

int main(void){

    FILE *inp1;
    FILE *inp2;
    char tiedosto1[100];
    char tiedosto2[100];
    char ch;
    char ph;

    scanf("%s", tiedosto1);
    scanf("%s", tiedosto2);

    if ( (inp1 = fopen(tiedosto1, "r")) == NULL){
        printf("Tiedoston avaaminen lukemista varten epäonnistui\n");
        return 0;
    }

    if ( (inp2 = fopen(tiedosto2, "r")) == NULL){
        printf("Tiedoston avaaminen lukemista varten epäonnistui\n");
        return 0;
    }

    for (ch =  getc(inp1), ph = getc(inp2); ch != EOF || ph != EOF; ch =  getc(inp1), ph = getc(inp2))
    {
        if (ch != ph)
        {
            printf("Tiedostot eivät ole sisällöltään identtiset.");

            return 0;
        }
        
    }
    printf("Tiedostot ovat sisällöltään identtiset.");

    fclose(inp1);
    fclose(inp2);

    return 0;
}

/*
Tee ohjelma, joka lukee standard inputista (stdin) kaksi merkkijonoa tekstitiedoston nimiksi,
avaa ko. tiedostot ja  vertaa tiedostojen sisältöjä.
Ohjelma ilmoittaa onko tiedostojen sisällöt identtisiä.
Ohjelman onnistuneen ajon ainoana tulostuksena on lause joka on sisällöltään joko:

"Tiedostot ovat sisällöltään identtiset."

tai

"Tiedostot eivät ole sisällöltään identtiset."



Tarkistin käyttää omia tekstitiedostoja, joten niitä ei tarvitse syöttää palautukseen tai ohjelman kirjoittaa tiedostoja.
Voit tehdä ohjelman kehittämisen ajaksi omalle koneellesi muutaman testitiedoston,
joitten sisällön tiedät ja joita voit käyttää sitten testaamaan ohjelmasi vertailun oikeellisuutta.

Voit käyttää virhetilanteiden tarkastuksessa ja jäljittämisessä muitakin tulostuksia, mutta niitä ei verrata tehtävän testauksessa ja arvioinnissa.
*/