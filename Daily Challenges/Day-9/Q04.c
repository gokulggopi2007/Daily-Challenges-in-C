#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int e=a,d=b;
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	printf("GCD:%d\n",a);
	int c=(e*d)/a;
	printf("LCM:%d",c);
	return 0;
}
