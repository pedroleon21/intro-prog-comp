#terminar

string=input()
stone=string[0]
tira=0
for i in range(1,len(string)):
    if(stone == string[i]):
        stone=string[i]
        tira+=1
print(tira)