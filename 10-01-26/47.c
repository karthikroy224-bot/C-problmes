#include <stdio.h>
#include<string.h>
int main() {
    char s1[20];
    char s2[20];
    fgets(s1,20,stdin);
    strcpy(s2,s1);
    printf("string 2 is :%s ",s2);
    return 0;
}