#include <stdio.h>
#include<ctype.h>

int main() {

    char ch1[50];
    scanf("%s",ch1);

    int i;
    while(ch1[i] != '\0'){
        ch1[i]=tolower(ch1[i]);
        i++;
    } 
    printf("%s",ch1);
    return 0;
}