#include <stdio.h>
#include <math.h>
#include <time.h> 
#include <stdbool.h>
#include "prototypes.h"
//                             Integer-Functions
//---------------------------------------------------------------------------------
int Quick_search_int(int vet[],int dim,int cercato)
{
    int pos;
    int i;
    pos = dim / 2;
    if(vet[pos]==cercato) 
    {
        return pos;
    }
    else if (vet[pos] > cercato)
    {
       for(i = -1; i < pos; pos--)
       {
           if(vet[pos] == cercato)
           {
               return (pos+1);
           }
       }
       return -1;
    }
    else if (vet[pos] < cercato)
    {
       for(i = pos; i < (dim+1); i++)
       {
           if(vet[i] == cercato)
           {
               return (i+1);
           }
       }
        return -1;
    }  
}
//---------------------------------------------------------------------------------
void Search_int_output(int array[],int dim,int search)
{
    int contatore;
    bool trovato = false;
    int posizione;
    do
    {
        if(array[contatore] == search)
        {
            trovato = true;
            posizione = contatore;
            printf("Ho trovato il tuo numero '%d' nella posizione %d . ", search, posizione);
        }
        contatore++;
    } while (contatore < dim && trovato != true);
}
//---------------------------------------------------------------------------------
int Sum_array(int array[],int dime)
{
    int i;
    int utilita = 0;
    for (i = 0; i < dime; i++)
    {
        utilita = utilita + array[i];
    }
    return utilita;
}
//---------------------------------------------------------------------------------
void Media_2_vect(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = (vettore1[i] + vettore2[i]) /2 ;
    }
}
//---------------------------------------------------------------------------------
void Media_2_vect_modulo(int vettore1[],int vettore2[],int dim,int risultati[])
{
    int i;
    for (i=0;i<dim;i++)
    {
        risultati[i] = ((vettore1[i] + vettore2[i]) % 2) ;
    }
}
//---------------------------------------------------------------------------------
int Media_vect(int array[],int di)
{
    int i;
    int utilita;
    int ritorno;
    for (i = 0; i < di; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = utilita / di;
    return ritorno;
}
//---------------------------------------------------------------------------------
int Media_vect_modulo(int array[],int d)
{
    int i;
    int utilita = 0;
    int ritorno = 0;
    for (i = 0; i < d; i++)
    {
        utilita = utilita + array[i];
    }
    ritorno = (utilita % d);
    return ritorno;
}
//---------------------------------------------------------------------------------
int Search_pari(int array[],int dime)
{
    int i;
    int conta_trovato = 0;
    int aiuto;
    for (i=0; i < dime; i++)
    {
        aiuto = (array[i] % 2);
        if (aiuto == 0)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
//---------------------------------------------------------------------------------
int Search_dispari(int array[],int dime)
{
    int i;
    int conta_trovato = 0;
    int aiuto;
    for (i=0; i < dime; i++)
    {
        aiuto = (array[i] % 2);
        if (aiuto != 0)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
//---------------------------------------------------------------------------------
int Search_min(int array[],int dime)
{
    int minimo;
    int i = 0;
    minimo = array[i];
    for (i=0; i < dime; i++)
    {
        if (minimo > array[i])
        {
            minimo = array[i];
        }
    }
    return minimo;
}
//---------------------------------------------------------------------------------
int Search_max(int array[],int dime)
{
    int minimo;
    int i = 0;
    minimo = array[i];
    for (i=0; i < dime; i++)
    {
        if (minimo < array[i])
        {
            minimo = array[i];
        }
    }
    return minimo;
}
//---------------------------------------------------------------------------------
int Search(int array[],int dime,int cercato)
{
    int i;
    int conta_trovato = 0;
    for (i=0; i < dime; i++)
    {
        if (array[i] == cercato)
        {
            conta_trovato = conta_trovato + 1;
        }
    }
    return conta_trovato;
}
//---------------------------------------------------------------------------------
void Transformers_Binary(int paziente)
{
    char stringa_binaria[9] = {' ',' ',' ',' ',' ',' ',' ',' '};
    char stringa_binaria_finale[9]= {' ',' ',' ',' ',' ',' ',' ',' '};
    int resto;
    int i;
    int copia;
    
    while(paziente != 0)
    {
    	copia = paziente;
        paziente = copia / 2;
        resto = copia % 2;
        if(resto == 0)
        {
            stringa_binaria[i] = '0';
        }
        else
        {
            stringa_binaria[i] = '1';
        }
        i=i+1;
    }
    int m = 0;
    int j = 7;
    while (m < 9)
    {
    	stringa_binaria_finale[j] = stringa_binaria[m];
    	m++;
    	j--;
	}
		printf("%s", stringa_binaria_finale);
}
//---------------------------------------------------------------------------------
void Auto_Load(int array[],int dim)
{
    //srand(time(0));
    //#include <time.h> 
    printf("\n ---Loading---->\n");
    int i;
    for (i = 0; i < dim; i++)
    { 

        //array[i] = (rand() % 50);
    } 
}
//---------------------------------------------------------------------------------
void Manual_Load(int array[],int dime)
{
    int i;
    for (i = 0; i < dime; i++)
    {
        printf("\n Inserisci numero : ");
        scanf("%d", &array[i]);
    }
}
//---------------------------------------------------------------------------------
void Bubble_Sort(int tavola[],int dim)
{
    int aiuto;
    int i=0;
    int m;
    int k;
    for( k=0 ; k < dim ; k++)
    {
        i = k;
        for( m= (dim-2) ; i<=m ; m-- )
        {
            if(tavola[m] > tavola[m+1])
            {
                aiuto = tavola[m];
                tavola[m] = tavola[m+1];
                tavola[m+1] = aiuto;
            }
        }
    }
}
//---------------------------------------------------------------------------------
void Insertion_Sort(int tavola[],int dim)
{
    int i;
    int back;
    //int posto;
    int temp;
    int aiuto;
    for( i=0 ; i < dim ; i++)
    {
        temp = tavola[i];
        //posto = i;
        if( temp > tavola[i+1])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[i+1];
            tavola[i+1] = aiuto;
            for (back = (i+1); (back > 0 && back !=0); back-- )
            {
                if(tavola[back-1] > tavola[back])
                {
                    aiuto = tavola[back];
                    tavola[back] = tavola[back-1];
                    tavola[back-1] = aiuto;
                }
            }

           

        }

    }
}
//---------------------------------------------------------------------------------
void Selection_Sort(int tavola[],int dim)
{
    int i;
    int cerca;
    int pozitione_minore=0;
    int aiuto;
    //int minore;
    int secchio;
    for(i = 0; i < dim; i++)
    {
    	secchio = tavola[i];
        for(cerca = i+1; cerca < (dim+1) ; cerca++)
        {
        	if(secchio > tavola[cerca])
        	{
        		pozitione_minore = cerca;
        		secchio = tavola[cerca];
			}
        }
        if(secchio != tavola[i])
        {
            aiuto = tavola[i];
            tavola[i] = tavola[pozitione_minore];
            tavola[pozitione_minore] = aiuto;
		}
    }
}
//---------------------------------------------------------------------------------
int Multip(int num1,int num2)
{
	int multiple = 0;
	multiple = num1 * num2;
	return multiple;
}
//---------------------------------------------------------------------------------
void Show_array(int vet[],int dim)
{
    int i;
    for (i=0;i<dim;i++)
    {
        printf("%d) NR : %d \n", i+1, vet[i]);
    }
}
//---------------------------------------------------------------------------------
int Fact(int paziente)
{
   int fat =1;
   do
   {
      fat = fat * paziente;
      paziente--;
   }while (paziente != 1);
   return fat;
}
//---------------------------------------------------------------------------------
void Load_0_Array(int buff[],int dim)
{
    int i;
    for(i=0; i<= dim;i++)
    {
        buff[i]=0;
    }
}
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//                              Float-Functions
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//                              Char-Functions
//---------------------------------------------------------------------------------
void char_plus(char str[],int dim,char stringa_transformata[])
{
	int i;
	for(i=0;i<dim;i++)
	{
		stringa_transformata[i] = str[i]+1;		
	}
}
//---------------------------------------------------------------------------------
void Search_voc_cons(char stringa[])
{
  char vocali[] = {'a','e','i','o','u'};
  int i;
  int k;
  int dim;
  int dim_vocali;
  int conta_vocali;
  int consonanti;
  dim = strlen(stringa);
  dim_vocali = strlen(stringa);
  conta_vocali = 0;
  consonanti = 0;
  dim = strlen(stringa);
  for (i= 0;i<dim;i++)
  {
      for (k=0;k<dim_vocali;k++)
      {
          if(stringa[i] == vocali[k])
          {
              conta_vocali = conta_vocali + 1;
          }
      }
  }
  consonanti = dim - conta_vocali;
  printf("Hai %d vocali nel tuo messaggio. \n", conta_vocali);
  printf("Hai %d consonanti nel tuo messaggio.\n", consonanti);
}
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//                             String-Functions
//---------------------------------------------------------------------------------
int String_copy(char segment1[],char segment2[])
{
    int x = 0;
    while(segment2[x] != '\0')
    {
        segment1[x] = segment2[x];
        x++;
    }
    segment1[x]='\0';
    return (x-1);
}
//---------------------------------------------------------------------------------
int Cmp_stringa(char segment1[],char segment2[])
{
    int aiuto;
    int aiuto2;
    int x = 0;
    while(segment2[x] != '\0')
    {
        aiuto = (int)segment1[x]; 
        aiuto2 =(int)segment2[x];
        if(aiuto > aiuto2)
        {
            return 1;
        }
        else if (aiuto < aiuto2)
        {
           return -1;
        }
        x++;
    }
    return 0;
    
}
//---------------------------------------------------------------------------------
int String_dimension(char compartimeni[])
{
    int dim = 0;
    int i = 0;
    while(compartimeni[i] != '\0')
    {
        dim = dim + 1;
        i++;
    }
    return dim;
}
//---------------------------------------------------------------------------------
void Search_Minuscole_maiuscole(char parola_input[])
{
  int conta_char[] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  int dim = 25;
  int maiuscole=0;
  int minuscole=0;
  //vettore conta lettere
  printf("\n");
  int i;
  i=0;
  //int dim_parola;
  int ris;
  int ris_2;
  //dim_parola = strlen(parola_input);
  while(parola_input[i] != '\0')
  {
      ris = (int)parola_input[i];
      ris_2 = ris -97;
      ris = ris - 65;
      if(ris_2 < 0)
      {
          //a grande
          conta_char[ris] = conta_char[ris] + 1;
          maiuscole++;
      }
      else
      {
          //a piccolae
          conta_char[ris_2] = conta_char[ris_2] + 1;
          minuscole++;
      }
      i++;
  }
   int a;
   int v = 64;
   printf("Loading --------------------->\n");
   for (a=0;a<dim;a++)
   {
       v++;
       printf("%c  |  %d \n",v,conta_char[a]);
   }
   printf("Ci sono %d maiuscole \n",maiuscole);
   printf("Ci sono %d minuscole",minuscole);
   printf("\n");
}
//---------------------------------------------------------------------------------
void Load_Char_0_9(char buff[])
{
    int x;
    int y=0;
    for (x=48; x < 58;x++,y++)
    {
        buff[y]= (char)x;
    }
}
//---------------------------------------------------------------------------------
void Load_Char_a_z(char buff[])
{
    int x;
    int y;
    for (x=97,y=0; x < 123;x++,y++)
    {
        buff[y]= (char)x;
    }
}
//---------------------------------------------------------------------------------
void Load_Char_A_Z(char buff[])
{
    int x;
    int y;
    for (x=65,y=0; x < 91;x++, y++)
    {
        buff[y]= (char)x;
    }
}
//---------------------------------------------------------------------------------
void Identify_string_output(char segment[])
{
    int x = 0;
    int paziente;


    //---------------------------Stringhe Trova--------------
    //string A-Z
    char segment_A_Z[26];
    Load_Char_A_Z(segment_A_Z);
    //string a-z
    char segment_a_z[27];
    Load_Char_a_z(segment_a_z);
    //string 0-9
    char segment_0_9[10];
    Load_Char_0_9(segment_0_9);
    //--------------------------------------------------------
    //----------carica trovato stringhe econta----------------
    int found_A_Z[26];
    int dim_lettere = 26;
    int found_a_z[26];
    int dim_numeri=10;
    int found_0_9[10];
    Load_0_Array(found_A_Z,dim_lettere);
    Load_0_Array(found_a_z,dim_lettere);
    Load_0_Array(found_0_9,dim_numeri);

    int c;
    int loc;
    loc = strlen(segment);
    while (x < loc)
    {
        paziente = (int)segment[x];


        if(paziente < 58 && paziente > 47) // appartiene a 0-9
        {
            c=0;
            while (c < 10)
            {
                if(segment[x] == segment_0_9[c])
                {
                    found_0_9[c] = found_0_9[c]+1;
                    c = 10;
                }
                //trovato e conta
                c++;
            }
        }
        else if (paziente < 91 && paziente > 64) // appartiene a A-Z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_A_Z[c])
                {
                    found_A_Z[c] = found_A_Z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;

            }
            //trovato e conta
        }
        else if (paziente < 123 && paziente > 96) // appartiene a a-z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_a_z[c])
                {
                    found_a_z[c] = found_a_z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;
            }
            //trovato e conta
        }
        x++;
    }
    int h;

    for(h=0;h<=25;h++)
    {
        printf("[A-Z] %c = %d\n",segment_A_Z[h],found_A_Z[h]);
    }
    for(h=0;h<=25;h++)
    {
        printf("[a-z] %c = %d\n",segment_a_z[h],found_a_z[h]);
    }
    for(h=0;h<10;h++)
    {
        printf("[0-9] %c = %d\n",segment_0_9[h],found_0_9[h]);
    }
}
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//---------------------------------------------------------------------------------
//                                       Cryptology
int Identify_string(char segment[],char found_copys[],int num_copys[])
{
    int x = 0;
    int paziente;


    //---------------------------Stringhe Trova--------------
    //string A-Z
    char segment_A_Z[26];
    Load_Char_A_Z(segment_A_Z);
    //string a-z
    char segment_a_z[27];
    Load_Char_a_z(segment_a_z);
    //string 0-9
    char segment_0_9[10];
    Load_Char_0_9(segment_0_9);
    //--------------------------------------------------------
    //----------carica trovato stringhe econta----------------
    int found_A_Z[26];
    int dim_lettere = 26;
    int found_a_z[26];
    int dim_numeri=10;
    int found_0_9[10];
    Load_0_Array(found_A_Z,dim_lettere);
    Load_0_Array(found_a_z,dim_lettere);
    Load_0_Array(found_0_9,dim_numeri);

    int c;
    int loc;
    loc = strlen(segment);
    while (x < loc)
    {
        paziente = (int)segment[x];


        if(paziente < 58 && paziente > 47) // appartiene a 0-9
        {
            c=0;
            while (c < 10)
            {
                if(segment[x] == segment_0_9[c])
                {
                    found_0_9[c] = found_0_9[c]+1;
                    c = 10;
                }
                //trovato e conta
                c++;
            }
        }
        else if (paziente < 91 && paziente > 64) // appartiene a A-Z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_A_Z[c])
                {
                    found_A_Z[c] = found_A_Z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;

            }
            //trovato e conta
        }
        else if (paziente < 123 && paziente > 96) // appartiene a a-z
        {
            c=0;
            while (c < 27)
            {
                if(segment[x] == segment_a_z[c])
                {
                    found_a_z[c] = found_a_z[c]+1;
                    c = 27;
                }
                //trovato e conta
                c++;
            }
            //trovato e conta
        }
        x++;
    }

    //char found_copys[],int num_copys
    //int totale_num= 25+25+10;
    int k = 0;
    int trov = 0;

    for( k= 0 ;k <= 25; k++)
    {
        if(found_A_Z[k] > 1)
        {
            //char
            found_copys[trov] = segment_A_Z[k];
            num_copys[trov] = found_A_Z[k];
            trov++;
            //coppie 
        }
    }

    k = 0;

    for( k= 0 ;k <= 25; k++)
    {
        if(found_a_z[k] > 1)
        {
            //char
            found_copys[trov] = segment_a_z[k];
            num_copys[trov] = found_a_z[k];
            trov++;
            //coppie 
        }
    }
    k = 0;
    for( k= 0 ;k <= 10; k++)
    {
        if(found_0_9[k] > 1)
        {
            //char
            found_copys[trov] = segment_0_9[k];
            num_copys[trov] = found_0_9[k];
            trov++;
            //coppie 
        }
    }
   return (trov-1);
}