#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){

    char input[50];
    //fgets(input,50,stdin);
    scanf("%s", input);

    // if(input[strlen(input)-1]=='\n'){
    //     input[strlen(input)-1]='\0';
    // }


    if(input[0]!='\0'){
        input[0]=toupper(input[0]);
    }

    printf("%s",input);

    return 0;
}