#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	switch(n){
		case 12:case 1:case 2:printf("Winter");break;
		case 3:case 4:case 5:printf("Summer");break;
		case 6:case 7:case 8:printf("Spring");break;
		case 9:case 10:case 11:printf("Rainy");break;
		default:printf("No Season");
	}
	return 0;
}
