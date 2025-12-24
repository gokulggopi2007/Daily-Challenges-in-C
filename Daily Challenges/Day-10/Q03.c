#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("Positive : %d\n",pos);
    printf("Negative : %d\n",neg);
    printf("Zero : %d",zero);
    return 0;
}