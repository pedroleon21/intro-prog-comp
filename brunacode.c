#include<stdio.h>
#include<stdlib.h>

void  quicksort(int vet[],int inicio,int fim);
int main ()
{
	int i, tamanho=10;
	int * vetor,*V,aux,j;

	//printf("digite o tamanho do vetor \n");
	//scanf("%d", &tamanho);
	printf("\nalocando...");
	vetor=(int *)calloc(tamanho,sizeof(int));

//	printf("digite os numeros para preencher o vetor \n");

/*	for (i=0; i<tamanho; i++)
	{
		scanf("%d", &vetor[i]);
	}*/
	printf("\nsetando..");
	for(i=0; i<10; i++)
    {
        vetor[i]=i;
    }
	printf("\nembaralhando");
    for(i=0; i<tamanho; i++)
    {
        j=rand()%tamanho;
        aux=V[j];
        vetor[j]=vetor[i];
        vetor[i]=aux;
    }

	quicksort(vetor, 0, tamanho);


	printf("\nmotrando");
	for(i=0; i<tamanho; i++)
	{
		printf("%d ", vetor[i]);
	}
	return 0;
}


void  quicksort(int vet[],int inicio,int fim)
{
    int i, j, pivo, aux;
    i = inicio;
    j= fim;
    pivo =vet[(inicio + fim) / 2];
    while(i <= j)
    {
        while(vet[i] < pivo)
        {
            i = i++;
        }
        while(vet[j]> pivo)
        {
            j--;
        }
        if( i <= j)
        {
            aux = vet[i];
            vet[i]=vet[j];
            vet[j]=aux;
        }
    }
    if( inicio < j )
    {
        quicksort(vet,inicio,j-1);
    }
    if(i < fim)
    {
        quicksort(vet,i,fim-1);
    }
}
/*
void quick_sort(int * vetor, int inicio, int fim)
{
	int i, j, aux, pivot;
	i=inicio;
	pivot=inicio;
	j=fim;
	while (i<j)
	{
		while(vetor[i]<=vetor[pivot] && i<fim)
		{
			i++;
		}
		while(vetor[j]>vetor[pivot] && j>inicio)
		{
			j--;
		}
		if(i<j)
		{
			aux = vetor[i];
			vetor[i]=vetor[j];
			vetor[j]=aux;
		}
	}
	aux=vetor[pivot];
	vetor[pivot]=vetor[j];
	vetor[j] = aux;
	quick_sort(vetor, inicio, j-1);
	quick_sort(vetor, j+1, fim);
}*/
