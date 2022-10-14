#include<stdio.h>
#include<math.h>
int calcPercentage(int science,int math,int sanskrit);

int main(){
	int science=95;
	int math=85;
	int sanskrit=75;
	
	printf("percentage is:%d",calcPercentage(science,math,sanskrit));
	return 0;
}

int calcPercentage(int science,int math,int sanskrit){
	return((science+math+sanskrit)/3);
}
