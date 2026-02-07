#include <stdio.h>
#include <string.h>

int main() {

    char ch1[50];
    char ch2 [50];

    scanf("%s",ch1);   
    scanf("%s",ch2);  

    if(strcmp(ch1,ch2)==0){
        printf("Equal");
    }  

    else{
        printf("Not Equal");
    }
 
    return 0;
}