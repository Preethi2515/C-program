#include<stdio.h>
static int amount;
void deposit(int);
int withdraw(int);
int enquiry();
void main()
{
    amount=10000;
    deposit(20000);
    int status=withdraw(18000);
    printf("Withdrawn status:%d",status);
    printf("Available balamce is:%d",enquiry());

}
void deposit(int got)
{
    amount+=got;
    printf("Deposited");
}
int withdraw(int wish)
{
    if(amount>=wish)
    {
        amount-=wish;
    return 1;
    }
    else {
        return 0;

    }
}

int enquiry()
{
    return amount;
}
