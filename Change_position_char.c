#include <stdio.h>
#include <string.h>

void transformers(char str[],int dim,char stringa_transformata[]);

int main()
{
    char stringa[21];
    int grandezza;
    char stringa_transformata[21];
    scanf("%s", stringa);
    printf("\n");
    grandezza = strlen(stringa);
    
    
    //printf("%s", stringa);
    transformers(stringa,grandezza,stringa_transformata);
    printf("%s", stringa_transformata);
    
    


    return 0;
}

void transformers(char str[],int dim,char stringa_transformata[])
{
	int i;
	for(i=0;i<dim;i++)
	{
		stringa_transformata[i] = str[i]+1;		
	}
}






