#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float dis;
	scanf("%d%d",&x1,&y1);
	scanf("%d%d",&x2,&y2);
	dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between points:%.2f",dis);
	return 0;
}
