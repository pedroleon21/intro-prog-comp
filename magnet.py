qtd=int(input())
mem=nw=mark=0
for _ in range(qtd):
    nw=int(input())
    if(mem!=nw):
        mark+=1
        mem=nw
    qtd-=1
print(mark)