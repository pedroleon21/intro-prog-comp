i=int(input())
d=0
while(i>0):
    a,b,c=input().split(' ')
    a=int(a)
    b=int(b)
    c=int(c)
    if((a+b+c)>=2):
        d+=1
    i-=1
print(d)