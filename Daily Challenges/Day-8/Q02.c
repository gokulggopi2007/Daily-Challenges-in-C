#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n!=0){
		int a=n%10;
		int b=n/10;
		int c=b%10;
		if(a<c){
			printf("No");
			return 0;
		}
		n/=10;
	}
	printf("Yes");
	return 0;
}
