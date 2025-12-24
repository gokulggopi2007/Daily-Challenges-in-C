#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num=n,sum=0,count=0;
	while(num!=0){
		int last=num%10;
		count++;
		num/=10;
	}
	num=n;
	while(num!=0){
		int lst=num%10;
		sum += pow(lst,count);
		num/=10;
	}
	if(n==sum){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
	return 0;
}
