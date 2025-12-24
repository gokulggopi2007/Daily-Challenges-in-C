#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                 printf("%c",str[i]);
                 return 0;
            }
        }
    }
    printf("No Repeating Character");
    return 0;
}