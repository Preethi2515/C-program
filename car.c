#include<stdio.h>
int main()
{
    int litre=0,kms=0;
    printf("Enter litre of fuel and driven kms");
    scanf("%d%d",&litre,&kms);
    int milage=kms/litre;
    float fuel=(float)kms/litre;
    printf("The consumed fuel/litres is %f",fuel);


}