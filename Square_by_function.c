#include<stdio.h>
#include<math.h>
void square();

int main()
{
	square();
	
	return 0;
}

void square()
{ int n;
printf("Enter Number: ");
scanf("%d",&n);


printf("%f",pow(n,2));
	

}
