#include<stdio.h>
int main()
{
	int n;
	int max=0,min=9;
	scanf("%d",&n);
	while(n!=0){
		int last=n%10;
		if(last>max){
			max=last;
		}
		if(last<min){
			min=last;
		}
		n/=10;
	}
	printf("%d\n",max);
	printf("%d",min);
	return 0;
}
