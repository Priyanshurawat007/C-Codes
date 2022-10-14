#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main() {
	char password[200];
	scanf("%s",password);
	salting(password);
	
}
void salting(char password[]){
	char salt[]="7123";
	char newpass[200];

strcpy(newpass,password);
strcat(newpass,salt);
puts(newpass);
}
