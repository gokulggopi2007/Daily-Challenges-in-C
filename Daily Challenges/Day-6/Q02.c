#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("Greatest:%d\n",a);
		if(b>c){
			printf("Smallest:%d",c);
		}
		else{
			printf("Smallest:%d",b);
		}
	}
	else if(b>a && b>c){
		printf("Greatest:%d\n",b);
		if(a>c){
			printf("Smallest:%d",c);
		}
		else{
			printf("Smallest:%d",a);
		}	
	}
	else{
		printf("Greatest:%d\n",c);
		if(b>a){
			printf("Smallest:%d",a);
		}
		else{
			printf("Smallest:%d",b);
		}	
	}
	return 0;
}
