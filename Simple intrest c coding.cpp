#include<stdio.h>
int main()
{
	float p,r,t,si;//we have used float as it accepts decimal value
	printf("enter principal,rate,time=");
	scanf("%f %f %f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("\t simple intrest=%f",si);// \t is used to denote tab as we cannot use tab so we have used tab 
	
	
}
