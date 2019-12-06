qtd=int()
string=input()
police=case=0
for i in range(0,len(string)):
    if(string[i] == -1 and police==0):
        crime+=1
    if(string[i]== 1):
        police+=1
print(crime)