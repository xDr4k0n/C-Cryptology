#include <stdio.h>
#include <string.h>
#include "prototypes.h"
#include "Mario_Library.c"

int main()
{
    long long int n;
    long long int k;
    long long int fatt_n;
    long long int fatt_k;
    long long int fatt_n_meno_k;
    long long int totale;
    printf("***********Combinazioni*********\n");
    printf("     C n,k=      n!                 \n");
    printf("           --------------           \n");
    printf("              k! (n-k)!            \n");
    printf("     C n,k=      n! (Totale)                \n");
    printf("           --------------           \n");
    printf("(Permut)     k! (n-k)! (Numeri rimanenti)           \n");
    printf("Inserisci numero totale elementi :");
    scanf("%lld",&n);
    printf("\n");
    printf("Inserisci quantita da classificare (k) :");
    scanf("%lld",&k);
    printf("\n");
    fatt_n=Fact(n);
    fatt_k=Fact(k);
    fatt_n_meno_k = Fact(n-k);
    printf("Fattoriale   n!   %lld  \n",fatt_n);
    printf("Fattoriale   k!   %lld  \n",fatt_k);
    printf("Fattoriale   (n-k)!   %lld  \n",fatt_n_meno_k);
    totale = fatt_n / (fatt_k * fatt_n_meno_k);
    printf("Formula utilizzata da come risultato : %lld\n ",totale);
    return 0;
}