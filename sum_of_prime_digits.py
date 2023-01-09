#Python Program to Find the Sum of Prime Digits

n=int(input("Enter Your Number: "))
s=0
while (n>0):
    r=n%10
    if (n > 1):
        count=0
        for i in range(2,(r//2)+1):
            if ((r % i)==0):
                count=count+1
                break
        if (count==0):
            s=s+r
    n=n//10
print("The Sum of the Prime Digit is: ",s)