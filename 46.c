#include<stdio.h>
#include<string.h>
int main(){

char txt[50];
fgets(txt,50,stdin);

txt[strlen(txt)-1]='\0';
printf("%zu",strlen(txt));

    return 0;
}