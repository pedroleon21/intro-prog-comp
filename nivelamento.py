qtd=int(input())
l=list(map(int,input().split()))
l.sort()
for i in range(0,qtd):
    print("{} ".format(l[i]), end="")
# 16 mim para fazer
# demorei pra entender que era um sort..