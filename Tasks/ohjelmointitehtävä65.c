#include <stdio.h>
#include <string.h>

int main(void){

    char tiedosto[100];
    FILE *inp;
    char sana[100];
    int onko = 0;

    if ( (inp = fopen("sanakirja.txt", "r")) == NULL){
        printf("Tiedoston avaaminen lukemista varten epäonnistui\n");
            return 0;
    }

    scanf("%s", sana);

    while (fgets(tiedosto, 100, inp) != NULL)
    {
        if (strstr(tiedosto, sana) != NULL)
        {
            char *sana1 = strtok(tiedosto, ";");
            char *kaannos = strtok(NULL, ";");

            kaannos[strcspn(kaannos, "\n")] = '\0';

            if (strcmp(sana1, sana) == 0)
            {
                printf("Sana %s englanniksi on %s\n", sana1, kaannos);
            }

            else if (strcmp(kaannos, sana) == 0)
            {
                printf("Sana %s suomeksi on %s\n", kaannos, sana1);
            }

            onko = 1;
        }
    }

    fclose( inp );

    if (onko == 0)
    {
        printf("Sanaa %s ei loytynyt sanakirjasta", sana);
    }

}

/*
Kirjoita suomi - englanti atk-sanakirjaohjelma, joka käyttää tiedostoksi tallennettua sanakirjaa.
Ohjelma pyytää sanan, joka voi olla suomeksi tai englanniksi.
Ohjelma tulostaa sanan vastineen toisella kielellä muodossa

Sana sana1 englanniksi on word1
tai

Sana word2 suomeksi on sana2
Mikäli sanaa ei löydy sanakirjasta, tulostetaan virheilmoitus:

    "Sanaa haettavasana ei loytynyt sanakirjasta"

Sanat sijaitsevat tiedostossa sanakirja.txt jonka rakenne on seuraavanlainen:

sana1suomeksi;sana1englanniksi
sana2suomeksi;sana2englanniksi
...
sanaNsuomeksi;sanaNenglanniksi
*/