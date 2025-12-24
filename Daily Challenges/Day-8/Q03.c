#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1,fact=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
	return 0;
}
