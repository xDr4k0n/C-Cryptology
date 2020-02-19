#include <stdio.h>
#include <string.h>
#include "prototypes.h"
#include "Mario_Library.c"

int main()
{
    long long int n;
    long long int k;
    long long int x = 1;
    long long int fattoriale_N;
    long long int aiuto_N_K;
    long long int fine_calcolo;
    long long int aiuto_calcolo;
    long long int aiuto_calcolo_x;


    printf("***********Disposizioni*********\n");
    printf("             xDn,k =   n!    \n");
    printf("                     ------    \n");
    printf("                     (n-k)!    \n");
    printf("\n");
    printf("          Esempio    3*n!    \n");
    printf("                    ------    \n");
    printf("                    (n-k)!    \n");
    printf("Inserisci numero totale elementi :");
    scanf("%lld",&n);
    printf("\n");
    printf("Inserisci quantita da classificare (k) :");
    scanf("%lld",&k);
    printf("Inserisci valore di x :");
    scanf("%lld",&x);
    fattoriale_N = Fact(n);
    aiuto_N_K = Fact((n-k));
    //fattoriale_X = Fact(x);
    if(x == 1 || x == 0)
    {
        printf("Fattoriale   N!   %lld  \n",fattoriale_N);
        printf("Fattoriale (N-K)! %lld\n",aiuto_N_K);
        //fine_calcolo = Fact(fattoriale_N - aiuto_N_K);
        printf("Risultato : %lld \n",fine_calcolo);
    }
    else
    {
        printf("Fattoriale   N!   %lld  \n",fattoriale_N);
        aiuto_calcolo = x * fattoriale_N;


        printf(" [N!]-> %lld  * [x]->  %lld = %lld\n", x, fattoriale_N, aiuto_calcolo);


        fine_calcolo = fattoriale_N / aiuto_N_K;
        printf("Fattoriale (N-K)! %lld\n",aiuto_N_K);



        aiuto_calcolo_x = aiuto_calcolo / aiuto_N_K;
        printf(" [x*N!] %lld  / [(N-K)!]  %lld = [%lld] \n", aiuto_calcolo, fattoriale_N, aiuto_calcolo_x);
    }
    return 0;
}