#include<stdio.h>
int main()
{int n;
char s1[30],s2[10];
printf("enter 1 string : ");
scanf("%s",&s1);
printf("Enter name ");
scanf("%d",n);
printf("2nd strinng : ");
scanf("%s",&s2);
strcat(s1,s2);
printf("concatenated=");
printf("%s\n",s1);

n=strlen(n);
printf("string length= %d",n);

return 0;



}
