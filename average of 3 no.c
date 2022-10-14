#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    printf("enter third number :");
    scanf("%d",&c);

    if(a < b && a < c)
    {
        printf("%d is smallest :",a);
    }
    else if(b < c)
    {
        printf("%d smallest :",b);
    }
    else
    {
        printf("%d is smallest :",c);
    }
    return 0;

}
