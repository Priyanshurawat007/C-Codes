#include<stdio.h>
#include<conio.h>
#define N 5
int stack [N];
int top=-1;
void main()
{

void push()
{
	int x;
	printf("Enter data : ");
	scanf("%d",&x);
	if(top==N-1)
	{
		printf("over flow");
		}
	else
	{
		top++;
		stack[top]=x;
		
		printf("The stack of x value %d",stack[top]);
		
	}
	
	
	
}
getch();
}
