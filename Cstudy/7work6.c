#include <stdio.h>
#define BASE 10.00
#define LIMIT 40
#define TIMES 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define TAX1 45
#define TAX2 75
int main(void)
{
    int hours;
    double salary,tax,net;

    printf("Please enter the hours you work this week:\n");
    while(scanf("%d",&hours)!=0)
    {
        if(hours<=40&&hours>=0)
            salary=hours*BASE;
        else if(hours<=168&&hours>=40)
            salary=LIMIT*BASE+(hours-LIMIT)*TIMES*BASE;
        else
        {
            printf("Are you donkey?That's impossible.Try again.");
            continue;
        }
        if(salary<300)
            tax=salary*RATE1;
        else if(salary>=300&&salary<450)
            tax=(salary-300)*RATE2+TAX1;
        else
            tax=(salary-450)*RATE3+TAX2;
        net=salary-tax;
        printf("The salary you earn:%f\n",salary);
        printf("The tax you should submit:%f\n",tax);
        printf("The net salary you get:%f\n",net);
    }
    return 0;
}