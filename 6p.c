#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char input[50];
    fgets(input,50,stdin);
    input[strlen(input)-1]='\0';
    int i;
    int x=1;
    int y=1;
    int z=1;

    if(!(strlen(input)==6)){
        x=0;
    }

    for(i=0;i<strlen(input);i++){
        if(isalpha(input[i])){
            y=0;
        }

        if(isalnum(input[i])){
            z=0;
        }
    }

    if(x==1&&y==1&&z==1){
        printf("valid");
    }

    else{
        printf("not valid");
    }

    return 0;
}