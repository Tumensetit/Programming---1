#include <stdio.h>
#include <string.h>
#include <ctype.h>

int teepieni(char merkkijono[]);

int teeiso(char merkkijono[]);

int main(void){

    char print [100];
    char merkkijono [100];
    fgets(merkkijono, 100, stdin);
    teepieni(merkkijono);
    teeiso(merkkijono);
    

}

int teepieni(char merkkijono[]){

    for (int i = 0; i < strlen(merkkijono); i++)
    {
        merkkijono[i] = tolower(merkkijono[i]);
    }
    
    puts(merkkijono);

    return (0);
}

int teeiso(char merkkijono[]){

    for (int i = 0; i < strlen(merkkijono); i++)
    {
        merkkijono[i] = toupper(merkkijono[i]);
    }
    
    puts(merkkijono);

    return (0);
}

/*
Kirjoita ohjelma, joka lukee rivin tekstiä funktiolla fgets merkkijonomuuttujaan, johon sopii enintään 100 merkkiä.
Ohjelma tulostaa merkkijonon sekä pienillä kirjaimilla että suurilla kirjaimilla. 
*/