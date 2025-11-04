#include<stdio.h>
int main()
{
	int l,b;
	scanf("%d%d",&l,&b);
	printf("Area of the Rectangle:%d\n",l*b);
	int s;
	scanf("%d",&s);
	printf("Area of the Square:%d\n",s*s);
	float a,h;
	scanf("%f%f",&a,&h);
	printf("Area of the triange:%.2f\n",0.5*a*h);
	float r;
	scanf("%f",&r);
	printf("Area of the circle:%.2f",3.14*r*r);
	return 0;
}
