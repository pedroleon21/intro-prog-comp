def encryptation(word):
    size=len(word)
    sqr=1
    while(sqr*sqr<size):
        sqr+=1
    printcode(word,sqr*sqr,sqr)
    print()
def printcode(word,start,kick):
    size=len(word)
    for i in range(start,-1,-kick):
        if(i<size):
            print(word[i],end="")
    if(start<kick*kick+kick-1):
        start+=1
        printcode(word,start,kick)
qtd=int(input())
for _ in range(qtd):
    word=input()
    encryptation(word)