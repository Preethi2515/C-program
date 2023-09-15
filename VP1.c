#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%5 && num%10)
    {
        printf("the number is divided my both 5and 10");

    }
    else if(num%3 || num%7 || num%11)
    {
        printf("The number is divided by 3,5,11");
    }
    else
    {
        printf("Invalid number");
    }
    
}