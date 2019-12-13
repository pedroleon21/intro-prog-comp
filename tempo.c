#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void preencheebaralha(int *vet,int size);
void mostra(int *vet,int size);
int main()
{
    int N,*vet;
    clock_t ini,fim;
    printf("\ndigite o numero: ");
    scanf("%d",&N);
    ini=clock();
    //retirando cast
    vet=(malloc(sizeof(int)*N));
    preencheebaralha(vet,N);
    fim=clock();
    printf("\npreenche tempo %lf\n",(fim-ini)*1000);
    ini=clock();
    mostra(vet,N);
    printf("\nmostra tempo %lf\n",(fim-ini)/CLOCKS_PER_SEC);
    fim=clock();
    return 0;
}
void mostra(int *vet,int size)
{
    int i=0;
    while(i<size)
    {
        printf("%d ",vet[i]);
        i++;
    }
}
void preencheebaralha(int *vet,int size)
{
    int i_preenche,v,aux,x=0;
    for(i_preenche=0;i_preenche<size;i_preenche++)
    {
        vet[i_preenche]=i_preenche;
    }
    while(x<10){
    for(i_preenche=0;i_preenche<size;i_preenche++)
    {
        v=rand()%size;
        aux=vet[i_preenche];
        vet[i_preenche]=vet[v];
        vet[v]=aux;
    }
    x+=1;
    }
}
