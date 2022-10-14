#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    float sum,sub1,sub2,sub3,sub4,sub5;
    int percentage,rollnumber;
    printf("Name of the student- ");
    scanf("%s",&name);
    printf("roll no.- ");
    scanf("%d",&rollnumber);

    printf("Enter marks obtain in 5 sub = ");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    printf("Total marks obtain=%f\n",sum);
    percentage=(sum/500)*100;
    printf("Percentage Scored =%d\n",percentage);

    getch();
    return 0;

}
