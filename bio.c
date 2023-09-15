#include<stdio.h>
void main()
{
    int empid;
    char empname[20]="";
    char skills[30]="";
    char companyname[40]="";
    int empexperience;
    float salary;
    printf("enter employee id");
    scanf("%d",&empid);
    printf("The employee id is:%d",empid);
    printf("enter employee name");
    scanf("%s",&empname);
    printf("The employee name is:%s",empname);
    printf("enter my skills");
    scanf("%s",&skills);
    printf("The employee skills are:%s",skills);
    printf("enter the company name");
    scanf("%s",&companyname);
    printf("The employee company name is:%s",companyname);
    printf("Enter the experience");
    scanf("%d",&empexperience);
    printf("The employee experience is:%d",empexperience);
    printf("enter the salary");
    scanf("%f",&salary);
    printf("The emoloyee salary is:%f",salary); 

}