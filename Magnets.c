#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cnt,mem=0,nw,mark=0;
    scanf("%d",&cnt);
    while(cnt>0)
    {
        scanf("%d",&nw);
        if(nw!=mem)
        {
            mem=nw;
            mark++;
        }
        cnt--;
    }
    printf("%d",mark);
}
/* não funcionou, estorou o tempo, mas gostei de fazer...
typedef struct magnet{
    int r,l;
    struct magnet *mr;
}magnet;
typedef struct queue{
    struct magnet *first;
}queue;
struct queue * fila;

void push(int l,int r);
int conta();

int main()
{
    int qtd,r,l,num;
    fila = (queue*)calloc(1,sizeof(queue));
    scanf("%d",&qtd);
    while(qtd>0)
    {
        scanf("%d",&num);
        if(num==10)
        {
            l=1;
            r=0;
        }
        else
        {
            l=0;
            r=1;
        }
        push(l,r);
        qtd--;
    }
    printf("%d\n",conta());
    return 0;
}
int conta()
{
    magnet * aux;
    int memr=0,meml=0,strings=0;
    aux=fila->first;
    while(aux!=NULL)
    {
        //printf("\nL: %d R: %d",aux->l,aux->r);
        if(meml!=aux->l || memr != aux->r)
        {
            strings++;
            meml = aux->l;
            memr = aux->r;
        }

        //anda pra frete
        aux=aux->mr;
    }
    return strings;
}
void push(int l,int r)
{
    magnet *aux;
    int mark;
    if(fila->first==NULL) aux=fila->first=(magnet*)(calloc(1,sizeof(magnet)));
    else
    {
        aux=fila->first;
        while(aux->mr!=NULL)
        {
            aux=aux->mr;

        }
        aux->mr=(magnet*)(calloc(1,sizeof(magnet)));
        aux=aux->mr;
    }
    aux->r=r;
    aux->l=l;
}
*/
