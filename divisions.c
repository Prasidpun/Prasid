#include<stdio.h>
int main()
{
    int math,english,accounting,microprocesser,cprogramming,total,percentage;
    printf("enter your math mark");
    scanf("%d",&math);
    printf("enter your english mark");
    scanf("%d",&english);
    printf("enter your accounting mark");
    scanf("%d",&accounting);
    printf("enter your microprocesser mark");
    scanf("%d",&microprocesser);
    printf("enter your cprogramming mark");
    scanf("%d",&cprogramming);
    total= math + english + accounting + microprocesser + cprogramming;
    percentage = total/5;
    printf("percentage is %d",&percentage);
    if(percentage >=80)
    {
        printf("you have got distinction");
    }
     else if(percentage>=60 )
    {
        printf("you have got first division");
    }
    else if(percentage>=50)
    {
        printf("you have got second division");
    }
    else if(percentage>=40)
    {
        printf("you have got third division");
    }
    else
    {
        printf("you have fail");
    }
}