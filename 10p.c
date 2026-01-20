#include <stdio.h>
#include<string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    int i,x=0;

    for(i=0;i<strlen(input);i++){
        if(input[i]=='e'&& input[i+1]=='r'&& input[i+2]=='r'&& input[i+3]=='o'&& input[i+4]=='r'){
            x=1;
        }
    }
        if(x==1){
            printf("found");
        }
        else{
            printf("not found");
        }
    

    return 0;
}