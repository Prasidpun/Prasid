#include<stdio.h>
int main()
{
    int sum,n,i;
    printf("enter a natural number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum + i;
    }
    printf("%d",&sum);
    return 0;
}
