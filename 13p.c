#include <stdio.h>
#include <string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    int i;
    int x=0;
    
        if(input[0]=='h'&&input[1]=='t'&&input[2]=='t'&&input[3]=='p'&&input[4]==':'&&input[5]=='/'&&input[6]=='/'){
            x=1;
        }

        if(input[0]=='h'&&input[1]=='t'&&input[2]=='t'&&input[3]=='p'&&input[4]=='s'&&input[5]==':'&&input[6]=='/'&&input[7]=='/'){
            x==1;
        }
    

     if(x==1){
            printf("valid");
        }

        else{
            printf("invalid");
        }
    return 0;
}