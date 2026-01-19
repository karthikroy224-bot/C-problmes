#include <stdio.h>
#include<string.h>

int main() {

    char input[50];
    scanf("%s",input);
    int i;
    int j;
    int count=0;

    for(i=0;i<strlen(input);i++){
        for(j=i+1;j<strlen(input);j++){
            if(input[i]==input[j]){
            count++;}
        }
    }

    if(count==0){
        printf(" No duplicate found");
    }

    else{
        printf("Duplicate found");
    }
    return 0;
}