/*
/   Ohjelma joka laskee ja kertoo onko joku luku toisen luvun monikerta, eli onko se jaollinen sillä
/
/
/
/   Tuomas Rahkola
*/
#include <stdio.h>

int main(void){

//pyydetään ensin kaksi kokonaislukua
    int kokonaisluku1, kokonaisluku2;
    scanf("%d", &kokonaisluku1);
    scanf("%d", &kokonaisluku2);

if(kokonaisluku1==0)
    printf("Luku %d ei ole luvun %d monikerta.", kokonaisluku2, kokonaisluku1);

if(kokonaisluku2==0)
    printf("Luku %d ei ole luvun %d monikerta.", kokonaisluku2, kokonaisluku1);

//sitten selvitetään onko luku1 luvun2 monikerta

if(kokonaisluku1%kokonaisluku2<=0)
    printf("Luku %d on luvun %d monikerta.", kokonaisluku1, kokonaisluku2);

else
    printf("Luku %d ei ole luvun %d monikerta.", kokonaisluku1, kokonaisluku2);
}

/*
Suunnittele ja toteuta ohjelma, joka lukee kaksi kokonaislukua. Ohjelma tutkii onko ensiksi syötetty luku toiseksi työtetyn luvun monikerta.
Ohjelma ilmoittaa käyttäjälle lopputuloksen joko muodossa

Luku # on luvun # monikerta.
tai

Luku # ei ole luvun # monikerta.
*/