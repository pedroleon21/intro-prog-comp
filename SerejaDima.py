def maior(l):
    if(l[0]<l[len(l)-1]):
        return l.pop()
    else:
        return l.pop(0)
qtd=int(input())
l=list()
for i in range(0,qtd):
    l.append(i)
#l=list(map(int,input().split()))
sj=dm=vez=0
while(len(l) and qtd!=0):
    if(vez%2!=0):
        dm+=maior(l)
    else:
        sj+=maior(l)
    vez+=1
print("{} {}".format(sj,dm))