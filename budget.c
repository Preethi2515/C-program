#include<stdio.h>
int main()
{
    int budget;
    printf("tell us your budget");
    scanf("%d",&budget);
    printf("can I get the free delivery:%d \n",((budget>=250)));
    printf("Can I get the top products:%d \n",(budget>=2000) && (budget<=5000));
    return -1;
}