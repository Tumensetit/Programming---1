#include <stdio.h>

int main(void){

    int luku, taulukko[5];
    scanf("%d", &luku);
    printf("Luku %d eroteltuna: ", luku);

    for (int i = 0; i < 5; i++)
    {
        taulukko[i] = luku % 10;
        luku /= 10;
    }

    for (int i = 4; i >= 0; i--)
    {
        if (luku < 0)
        {
            printf("-%d ", taulukko[i]);
        }
        else
        {
            printf("%d ", taulukko[i]);
        }
    }
    
    return 0;
}