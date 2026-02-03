#include <stdio.h>
#include <string.h>

int main() {

    char input[50];
    fgets(input,50,stdin);
    int i;
    int count=0;

    for(i=0;i<strlen(input);i++){
        if(input[i]=='a'||input[i]=='A'||input[i]=='e'||input[i]=='E'||input[i]=='i'||input[i]=='I'||input[i]=='o'||input[i]=='O'||input[i]=='u'||input[i]=='U'){
            count++;
        }
    }
            printf("%d",count);
    
    return 0;
}