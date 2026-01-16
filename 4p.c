#include <stdio.h>
#include<string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    //input[strlen(input)-1]='\0';
    int i;
    int count=0;

    for(i=0;i<strlen(input);i++){
        if(input[i]==' '||input[i]=='\0'){
            count++;
        }
            }
                    printf("%d",count);

    return 0;
}