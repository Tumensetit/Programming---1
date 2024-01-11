#include <stdio.h>

int main() {

   int alustus1, alustus2;

   for (alustus1 = 1; alustus1 <= 8; ++alustus1) {

        for (alustus2 = 1; alustus2 <= alustus1; ++alustus2) {

        printf("a");

      }

      printf("\n");

   }

}



/*
Tee ohjelma, joka tulostaa seuraavanlaisen kuvion.
Käytä ohjelmassasi toistorakennetta (do-while, while, tai for-rakennetta), jossa a-kirjaimet tulostetaan.
Taulukkoa ei siis saa kovakoodata, 

a
aa
aaa
aaaa
aaaaa
aaaaaa
aaaaaaa
aaaaaaaa
*/