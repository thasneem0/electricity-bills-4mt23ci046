#include <stdio.h>
struct bill
{
    int id;
    char name[20];
    int units;
}b;
void main()
{
    int n,i,units;
    printf("enter the customer details\n");
    printf("enter the customer id\n");
    scanf("%d",&b.id);
    printf("enter the customer name\n");
    scanf("%s",b.name);
    printf("enter the units of the customers\n");
    scanf("%d",&b.units);
    float base_amount=100.0;
    float surcharge=0.0f;
    float total_amount= 0.0f;
    if(units>100)
    {
        base_amount+=(100.0*5.0);
    }
    else
    {
        base_amount+=(units*5.0);
    }
    if(units>300)
    {
        base_amount+=(units*7.0);
    }
    else if(units>100&&units<300)
    {
        base_amount+=((units-100.0)*7.0);
    }
    if(base_amount>1000.0)
    {surcharge=((base_amount/100.0)*5.0);
    }
    total_amount=surcharge+base_amount;
    printf("the customer bill details are\n");
        printf("customer id:%d\n",b.id);
        printf("customer name:%s\n",b.name);
        printf("the units consumed:%d\n",b.units);
        printf("basebill:rps %f\n",base_amount);
        if(surcharge>1000.0)
        {
         printf("surcharge=%frps\n",surcharge);
        }
        printf("total_amount=%frps\n",total_amount);
    
    
}
