#include<stdio.h>

int main()
{
    int num1,num2;
    char operator;
    printf("Enter an operator(+,-,*,/)");
    scanf("%c",&operator);
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    switch(operator){
    case  '+':
          printf("%d+%d=%d",num1,num2,num1+num2);
          break;
    case '-':
           printf("%d-%d=%d",num1,num2,num1-num2);
          break;
    case '*':
         printf("%d*%d=%d",num1,num2,num1*num2);
        break;
    case '/':
         printf("%d/%d=%d",num1,num2,num1/num2);
        break;
    
    default:
        printf("no operator");}
        return 0;
}