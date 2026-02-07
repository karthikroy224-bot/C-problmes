#include <stdio.h>
#include<string.h>
int main() {

    char ch1[50],ch2[50];
    scanf("%s",ch1);

    strcpy(ch2,ch1);
    printf("ch2 is %s",ch2);   

    return 0;
}