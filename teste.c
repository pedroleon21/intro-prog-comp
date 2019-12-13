#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void alloca_vet(int vet[],int vetsize);
void mostra(int vet[],int vetsize);
void booble(int vet[],int vetsize);


int main()
{
    int vet[100],i,j,aux;
    for(i=0;i<100;i++)
    {
        vet[i]=rand();
    }
    for(i=1;i<100;i++)
    {
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=aux;
    }
    for(i=0;i<100;i++)
    {
        printf(" %d",vet[i]);
    }
    return 0;
}

/*int main()
{
    int *vet,n=10,i,j,aux;
    printf("tamanho: ");
    //scanf("%d",&n);
    printf("%d",n);
    system("clear");
    vet= (int*)calloc(n,sizeof(int));
    printf("\nalocando vetor...");
    for(i=0; i<n; i++)
    {
        vet[i]=i;
    }
    //desordena vetor;
    for(i=0; i<n; i+=1)
    {
        j=(int)(rand()%i);
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=vet[i];
    }printf("\nMostrando:\n");
    for(i=0; i<n; i+=1)
    {
        printf(" %d",vet[i]);
    }
    return 0;
}*/
void mostra(int vet[],int vetsize)
{
    int i;
    for(i=0; i<vetsize; i+=1)
    {
        printf(" %d",vet[i]);
        i++;
    }
}
void alloca_vet(int vet[],int vetsize)
{
    //aloca o vetor
    int i, aux,j;
    //retirando casting
    vet = (calloc(vetsize,sizeof(int)));
    for(i=0; i<vetsize; i+=1)
    {
        vet[i]=i;
    }
    //desordena vetor;
    for(i=0; i<vetsize; i+=1)
    {
        j=rand()%i;
        aux=vet[i];
        vet[i]=vet[j];
        vet[j]=vet[i];
    }
}
void booble(int vet[],int vetsize)
{
    int i,j,flag;
    flag == 1;
    for(i=0; i<vetsize && flag == 1; i++)
    {
        for(j=0; j<vetsize-i;);
    }
}
