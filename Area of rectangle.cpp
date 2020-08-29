//Area of rectangle
#include<stdio.h>
int main()
{
float length, width, area;

    printf("Enter length of rectangle\n"); // \n allows to perform task in new line
    
    scanf("%f", &length);

    printf("Enter width of rectangle\n");
    scanf("%f", &width);

    area = length * width;

    printf("Area of Rectangle is %f\n", area);

    return 0;
 
	
	
	
}
