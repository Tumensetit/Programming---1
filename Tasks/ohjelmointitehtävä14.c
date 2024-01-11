#include <stdio.h>

int main() {

   int alustus1, alustus2, alustus3;

   for (alustus1 = 1; alustus1 <= 8; ++alustus1) {

         for(alustus3 = alustus1; alustus3 <= 8; ++alustus3){

         printf(" ");

         }

         for (alustus2 = 1; alustus2 <= alustus1; ++alustus2) {

         printf("a");

      }

      printf("\n");

   }

}