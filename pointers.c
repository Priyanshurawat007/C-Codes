#include<stdio.h>
int main()
{
int a=22,*a=&a;
printf("\n value of a =%d",*a);
printf("\n address of a =%u",&a);
printf("\n value at address %u=%d",&a*(&a));

return 0;


}
