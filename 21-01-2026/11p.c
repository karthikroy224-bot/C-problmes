#include <stdio.h>
#include<string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    int i;

    for(i=strlen(input)-1;i>=0;i--){
        printf("%c",input[i]);
    }    
    return 0;
}