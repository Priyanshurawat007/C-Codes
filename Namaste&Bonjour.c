#include<stdio.h>

void namaste();
void bonjour();
void fuck_u();

int main()
{
	char ch;
	printf("Nationality (i for India/f for French) : ");
	scanf("%c",&ch);
	
	if(ch=='i')
	{namaste();}
	else if(ch=='f'){
		bonjour();
	}
	else
	{fuck_u();
	}
	return 0;
}

void namaste(){
printf("NAMASTE");}
void bonjour()
{printf("BONJOUR");
}
void fuck_u(){
	printf("FUCK U");
}
