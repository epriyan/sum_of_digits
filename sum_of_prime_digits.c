//C Program to Find the Sum of Prime Digits

#include<stdio.h>
int main(){
    int i,s=0,count,n,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0){
        r=n%10;
        if (n>1){
            count=0;
            for(i=2;i<=(r/2);i++){
                if ((r % i)==0){
                    count=count+1;
                    break;
                }
            }
            if (count==0){
                s=s+r;
            }
        }
        n=n/10;
    }
    printf("The Sum of the Prime Digit is: %d",s);
}