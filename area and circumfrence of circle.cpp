//calculate area and circumfecne of circle
#include<stdio.h>'
int main()
{
	float radius,area,circumfrence;
	float PI=3.14;// we cannot keep pie so,we have used instead of that 
	printf("enter the radius of circle=");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("area of circle is=%f",area);
	circumfrence=2*PI*radius;
	printf("circumfrence of circle=%f",circumfrence);
	
	
	
}
