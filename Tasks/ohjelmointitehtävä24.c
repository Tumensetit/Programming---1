#include <stdio.h>
#include <math.h>

double floori ();
double x, y;
int main(){

    
    int n=0;

        while( n < 5 )
        {
            n++;

            scanf("%lf", &x);
            floori();
            printf("%lf %lf\n", x, y);
        }

return(0);

}

double floori (){

    y = floor(x + 0.5);

    return(y);
}
/*
Funktio floor pyöristää luvun lähimmäksi kokonaisluvuksi. Lause 

y = floor(x + 0.5);

pyöristää luvun lähimmäksi kokonaisluvuksi (double tyyppisenä kylläkin) ja tallettaa tuloksen muuttujaan y.
Tee ohjelma, joka lukee viisi lukua ja tulostaa kunkin luvun alkuperäisenä ja pyöristettynä.
Toteuta ohjelma omana funktiona, jota kutsutaan main-funktiosta. 
*/