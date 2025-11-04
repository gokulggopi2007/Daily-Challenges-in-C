#include<stdio.h>
int main()
{
	int prt,rate,term;
	scanf("%d%d%d",&prt,&rate,&term);
	printf("Interest:%d",(prt*rate*term)/100);
	return 0;
}
