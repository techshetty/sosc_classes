import random as rd
print("Start your test")
ol=["+","-","*","//"]
od=["added to","subtacted from","multiplied to","divided by"]
k=5
sc=0
while(k>0):
    a=rd.randrange(1,10)
    b=rd.randrange(1,10)
    ch=rd.randrange(4)
    print(f"What is {a} {od[ch]} {b} ?: ")
    us=input()
    if int(us)==eval(str(a)+ol[ch]+str(b)):
        sc+=1
        print(f"Correct Ans. Your score is {sc}")
    else:
        print(f"Wrong Ans. Your score is {sc}")
    k-=1
print(f"Your total score: {sc}")
