#include <stdio.h>
#include<string.h>
int main() {
    char s1[20];
    char s2[20];
    fgets(s1,20,stdin);    
    fgets(s2,20,stdin);  
    int res=strcmp(s1,s2); 

    if (res==0){
        printf("equal");
    } 

    else {
        printf("not equal");
    }
    return 0;
}