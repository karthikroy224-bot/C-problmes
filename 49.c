#include<stdio.h>
#include<string.h>

int main()
{
    char ch1[20];
    char ch2[sizeof(ch1)];
    int i,n=0;
    fgets(ch1,20,stdin);
    for(i=strlen(ch1)-1 ; i>=0 ; i--){
    printf("%c",ch1[i]);
}
    return  0;
}