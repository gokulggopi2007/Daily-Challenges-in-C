#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int vc=0,cc=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'|| str[i]=='a'|| str[i]=='e'|| str[i]=='o'|| str[i]=='u'|| str[i]=='i'){
            vc++;
        }
        else{
            cc++;
        }
    }
    printf("Vowel : %d\nConsonant : %d",vc,cc);
    return 0;
}