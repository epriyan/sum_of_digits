#Python Program to Find the Sum of Digits

n=int(input("Enter Your Number: "))
s=0
while (n>0):
    r=n%10
    s=s+r
    n=n//10
print("The Sum of the Digit is: ",s)