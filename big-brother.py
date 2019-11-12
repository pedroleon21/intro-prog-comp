a,b=input().split(' ')
a=int(a)
b=int(b)
year=0
while(a<=b):
    year+=1
    a=3*a
    b=2*b
print(year)