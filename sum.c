//C program to calculate the sum of digits

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,sum=0;
    printf("\nEnter your digit:");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of digit is: %d",sum);
    getch();
    return 0;
    
}