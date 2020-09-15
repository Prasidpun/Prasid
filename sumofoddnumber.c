#include<stdio.h>
int main()
{
    int sum,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum + i;
    }
    printf("%d",&sum);
    return 0;
}
