#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char * poistaValilyonnit(char *merkkijono){

    int valilaskuri = 0;

    for (int i = 0; merkkijono[i] != '\0'; i++)
    {
        if (merkkijono[i] != ' ')
        {
            merkkijono[valilaskuri] = merkkijono[i];
            valilaskuri++;
        }
        
    }
    merkkijono[valilaskuri] = '\0';
    return merkkijono;
}

int main(){

    char merkkijono[3][100];

    for (int laskuri = 0; laskuri < 3; laskuri++)
    {
        fgets(merkkijono[laskuri], 100, stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s", poistaValilyonnit(merkkijono[i]));
    }

    return 0;
}