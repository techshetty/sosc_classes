import random as rd
letters="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
digits="0123456789"
sym="!@#$%^&*()"
print("How many letters do you want: ?")
l=int(input())
print("How many digits do you want: ?")
d=int(input())
print("How many symbols do you want: ?")
s=int(input())
pwd=""
for i in range(l):
    pwd+=rd.choice(letters)
for i in range(d):
    pwd+=rd.choice(digits)
for i in range(s):
    pwd+=rd.choice(sym)
pwd="".join(rd.sample(pwd,len(pwd)))
print("Your password is: "+pwd)