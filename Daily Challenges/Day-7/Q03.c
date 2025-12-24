#include<stdio.h>
int main()
{
	int marks;
	scanf("%d",&marks);
	if(marks>=90 && marks<=100){
		printf("Grade:A");
	}
	else if(marks>=70 && marks<=89){
		printf("Grade:B");
	}
	else if(marks>=50 && marks<=69){
		printf("Grade:C");
	}
	else{
		printf("Fail");
	}
	return 0;
}
