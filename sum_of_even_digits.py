#Python Program to Find the Sum of Even Digits

n=int(input("Enter Your Number: "))
s=0
while (n>0):
    r=n%10
    n=n//10
    if (r%2==0):
        s=s+r
print("The Sum of the Even Digit is: ",s)