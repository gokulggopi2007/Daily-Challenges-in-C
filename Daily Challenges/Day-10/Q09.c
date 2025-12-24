#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==tolower(str[i])){
               str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}