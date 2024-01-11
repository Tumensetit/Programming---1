#include <stdio.h>

int main(void){

    int rivit = 1, merkit = 0;
    char tiedosto[100];
    FILE *intfilep;
    char ch;

    if ( (intfilep = fopen("teksti.txt", "r")) == NULL){
        printf("Tiedoston avaaminen lukemista varten epäonnistui\n");
        return 0;
    }

    for (ch =  getc(intfilep); ch != EOF; ch =  getc(intfilep))
    {
        if (ch == '\n')
        {
            rivit++;
        }

        if (ch != ' ' || ch != '\n')
        {
            merkit++;
        }
        
        
    }
    fclose( intfilep );
    printf("Rivit: %d\nMerkit: %d", rivit, merkit);
    
}

/*
Tee ohjelma, joka laskee tekstitiedoston (teksti.txt) rivien ja merkkien lukumäärät ja tulostaa tiedot
(alla esimerkkinumerot - ohjelmasi tulee laskea toki varsinaiset arvot ja näyttää ne alla olevien numeroiden sijasta) kuvaruudulle muodossa...


Rivit: 234
Merkit: 2334

Riveiksi ei lasketa tyhjiä rivejä.
*/