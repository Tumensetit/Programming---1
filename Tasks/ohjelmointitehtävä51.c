#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char jono[3][100];
    char character;

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z, gre= 0;

    for (int laskuri = 0; laskuri < 3; laskuri++)
    {
        scanf("%s", jono[laskuri]);
    }

    printf("Aakkonen        Kpl\n");

    for (character = 'a'; character <= 'z'; character++)
    {
        for (int jaskuri = 0; jaskuri < 3; jaskuri++)
        {
            for (int il = 0; il < strlen(jono[jaskuri]); il++)
            {
                printf("%c", character);
                if (jono[jaskuri][il] == 'n');
                {
                    gre++;
                }
            }
            
        }
        printf("\n%-15c %d", character, gre);
        gre = 0;
    }

}
/*
Kirjoita ohjelma, joka lukee 3 riviä (max 100 merkkiä/rivi) tekstiä ja laskee tekstissä esiintyvien aakkosten lukumäärän ja tulostaa tulokset kuvaruudulle (skandeista ei tarvitse välittää). Tulosta vastaukset kahtena sarakkeena, allaolevan mukaisesti:

Aakkonen        Kpl
a               ##
b               #
c               #
d               ##
e               #
f               ##
g               #
h               #
i               #
j               #
k               #
l               #
m               #
n               #
o               #
p               #
q               #
r               #
s               #
t               #
u               #
v               #
w               #
x               #
y               #
z               #
*/