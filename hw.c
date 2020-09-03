#include<stdio.h>
int main()
{
    int p,t,r,si;
    printf("enter your principle");
    scanf("%d",&p);
      printf("enter your time");
      scanf("%d",&t);
        printf("enter your rate");
    scanf("%d",&r);
    si=(p*t*r)/100;
    if(si >= 250)
    {
        printf("Pay immediatly");
        
    }
     else if(si < 250 && si >100 )
    {
        printf("Pay next month");
    }
    else if(si < 100 && si >50 )
    {
        printf("Pay in six month");
    }
    else
    {
        printf("pay next year");
    }
}