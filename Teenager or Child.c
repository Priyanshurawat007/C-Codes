#include<stdio.h>
int main()
{
   int age;
   printf("Enter Age : ");
   scanf("%d",&age);

   if(age>=18)
   {
    printf("Adult\n");
   }
else if (age>13 && age<18)
{
    printf("Teenager\n");
}
else {
    printf("child");
}
return 0;
}
