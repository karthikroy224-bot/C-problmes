#include <stdio.h>
#include <string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    input[strlen(input)-1]='\0';
    
    int i;
    int x=0;
    
        if(input[strlen(input)-1]=='t'&&input[strlen(input)-2]=='x'&&input[strlen(input)-3]=='t'&&input[strlen(input)-4]=='.'){
            x=1;
        }
    
     if(x==1){
            printf("valid");
        }

        else{
            printf("invalid");
        }
    return 0;
}