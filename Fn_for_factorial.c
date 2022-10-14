#include<stdio.h>
long double fact(long double n);

int main(){
	printf("Factorial is : %d",fact(900));
	return 0;
}
long double fact(long double n){
	if(n==0)
	{
		return 1;
	}
	
	long double factNm1=fact(n-1);
	long double factN=factNm1*n;
	return factN;
}
