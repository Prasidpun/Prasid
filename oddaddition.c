#include<stdio.h>
int main()
{
    int sum=0,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d",2*i-1);
        sum=sum+2*i-1;
      printf("\n");
    }
    printf("%d",sum);
    return 0;
}
