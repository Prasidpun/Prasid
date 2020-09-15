#include<stdio.h>
int main()
{
    int sum=0,n,i,a=1;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d",&a);
        sum=sum+a;
        a=sum+2;
    }
    
    return 0;
}
