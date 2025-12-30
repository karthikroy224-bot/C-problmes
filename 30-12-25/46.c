#include<stdio.h>
#include<string.h>
int main(){

char txt[50];
fgets(txt,50,stdin);

printf("%zu",strlen(txt));

    return 0;
}