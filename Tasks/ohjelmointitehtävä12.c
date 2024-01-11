#include <stdio.h>

int main(void){

int celsius = -100;
double fahrenheit;
    
    printf("Celsius  Fahrenheit\n");

    while(celsius < 110){

        fahrenheit = 1.8 * celsius + 32;
        printf("%5d%12.2lf\n", celsius, fahrenheit);
        celsius = celsius + 10;
    }



}


/*
Tee ohjelma, joka tulostaa Celsius -asteet ja vastaavat Fahrenheit -asteet väliltä -100... 100C kymmenen asteen välein seuraavan esimerkin mukaisesti:

Celsius  Fahrenheit
 -100     -148.00
  -90     -130.00
  -80     -112.00
  -70      -94.00
  -60      -76.00
  ....
   90      194.00
  100      212.00

Laske ja tulosta Fahrenheit -asteiden arvo kaavan perusteella: fahrenheit = 1.8 * celsius + 32.

Käytä ohjelmassasi toistorakennetta (do-while, while, tai for-rakennetta), jossa tulostetaan taulukon numeeriset arvot sisältävät rivit.
Ohjelmassa tulee siis olla yksi printf-lause otsikkorivin tulostamista varten ja vain yksi printf-lause numeeristen arvojen tulostamiseen. 
Taulukkoa ei siis saa kovakoodata!
*/