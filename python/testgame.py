import random
#test
rl=["A","2","3","4","5","6","7","8","9","10","J","Q","K"]
rv=[1,2,3,4,5,6,7,8,9,10,10,10,10]
print("YOUR CARDS: ")
c1=random.randrange(1,14)
c2=random.randrange(1,14)
print(f"Card 1:{rl[c1]} and Card 2: {rl[c2]}")
c1=rv[c1]
c2=rv[c2]

n=input("Do you wan't to pick the third card: ?")
c3=0
if(n=="1"):
    c3=random.randrange(1,14)
    print(f"Card 3: {rl[c3]}")
    c3=rv[c3]
c4=random.randrange(1,14)
c5=random.randrange(1,14)
print("COMPUTER's CARDS: ")
print(f"Card 1: {rl[c4]}, Card 2: {rl[c5]}")
c4=rv[c4]
c5=rv[c5]
if(int(c1)+int(c2)+int(c3)>21):
    print("USER LOST")
    exit()
if(int(c4)+int(c5)>21):
    print("COMPUTER LOST")
    exit()
if((int(c1)+int(c2)+int(c3))>(int(c3)+int(c4))):
    print("USER WINS")
else:
    print("COMPUTER WINS")

