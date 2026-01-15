#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main(){ 

    char input[50];
    scanf("%s",input);
    int i,a=0,b=0,c=0;

    int len;
    len=strlen(input);

    if(len<8){
        printf("weak");
        return 0;
    } 

    for(i=0;i<strlen(input);i++){
    if(islower(input[i])){
        a=1;
    }

    if(isupper(input[i])){
        b=1;
    }

    if(isdigit(input[i])){
        c=1;
    }
    }

    if(a==1&&b==1&&c==1){
        printf("strong");
    }

    else{
        printf("weak");
    }
    return 0;
}