#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count,sum=0,product=1;
	while(n!=0){
		int last=n%10;
		count++;
		sum=sum+last;
		product=product*last;
		n/=10;
	}
	printf("count digit:%d\n",count);
	printf("sum digit:%d\n",sum);
	printf("product digit:%d",product);
	return 0;
}
