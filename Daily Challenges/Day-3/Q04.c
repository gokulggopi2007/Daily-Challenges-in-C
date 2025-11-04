#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int last=n%10;
	sum = sum+last;
	n/=10;
	printf("%d\n",last);
	printf("%d",n);
	return 0;
}
