a=input()
countup=countlw=0
for walkA in range (0,len(a)):
    letter=a[walkA]
    if(letter.isupper()):
        countup+=1
    if(letter.islower()):
        countlw+=1
if(countlw>=countup):
    print(a.lower())
else:
    print(a.upper())