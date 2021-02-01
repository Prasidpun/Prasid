#include <stdio.h>

int main()
{
 int salary , saving , amount , a , t ;
 printf("enter the monthly salary");
 scanf("%d",salary);
 printf("enter the amount he can save ");
 scanf("%d",saving);
 printf("enter the amount he wanna have at the time of retirement");
 scanf("%d",amount);
 for (t=0;a<amount;t=t+1)
 {
     a = a + saving;
 }
 printf("the time he will get retired %d ",t);
 printf("the amount he will have at the time of retirement %d",amount);
 
}
