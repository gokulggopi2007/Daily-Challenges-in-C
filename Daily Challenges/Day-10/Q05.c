#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(key==arr[i]){
             printf("%d",i);
             return 0;
        }
    }
    printf("-1");
    return 0;
}