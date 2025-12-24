#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num=n,rev=0;
	while(num!=0){
		int last=num%10;
		rev = rev*10+last;
		num/=10;
	}
	if(n==rev){
		printf("Palindrome");
	}
	else{
		printf("Not Palindrome");
	}
	return 0;
}
