#include<stdio.h>
#include<conio.h>

int main()
{
    int n,r,sum=0;
    printf("\nEnter your digit: ");
    scanf("%d",&n);
    
    while (n>0)
    {
        r=n%10;
        n=n/10;
        if (r%2 != 0)
        {
            sum=sum+r;
        }
        
    }

    if (sum!=0)
    {
        printf("\nThe sum of all odd number in the digit is %d",sum);
    }
    else
    {
        printf("\nThere is no odd number in the given digit");

    }
    
    getch();
    return 0;
    
}
