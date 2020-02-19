#include <stdio.h>
#include <string.h>
#include "prototypes.h"
#include "Mario_Library.c"
#define lunghezza 70



int main()
{
    char char_buff[lunghezza];
    char coppie_char[lunghezza];
    //int coppie_per_char[lunghezza];
    int numero_coppie[lunghezza];
    
    scanf("%s", char_buff);
    printf("Input ok\n");
    int dim=-1;
    int i=0;
    while(i<=lunghezza)
    {
        coppie_char[i]='^';
        numero_coppie[i]=-1;
        i++;
    }
    dim = Identify_string(char_buff,coppie_char,numero_coppie);
    printf("Dimensione coppie -> %d \n", (dim+1));
    i=0;
    while(coppie_char[i] != '^')
    {
        printf("Carattere : %c", coppie_char[i]);
        printf(" ha  %d coppie \n", numero_coppie[i]);
        i++;
    }
    int f=0;
    long long int moltiplicatore = 1;
    long long int fattoriale = 0;
    long long int k_fattoriale = 0;
    long long int fine= 0;
    if(dim != -1)
    {
        while(coppie_char[f] != '^')
        {
            moltiplicatore = moltiplicatore * Fact(numero_coppie[f]);
            f++;
        }
    }
    //fattoriale numero totale digit inseriti
    fattoriale = Fact(strlen(char_buff));
    fine = fattoriale /moltiplicatore;
    printf("Calcolo combinatorio di %d charatteri con %d coppie!\n",strlen(char_buff),(dim+1));
    printf("Possibili combinazioni %lld \n", fine);
    






    return 0;
    
}
