#include<stdio.h>
int main()
{
    int n, r,c, sum=0,temp;
    printf("enter 3 digit no.: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if(n==sum)
        printf("It's Armstrong");
    else
        printf("it's not Armstrong");

    return 0;
}
