#include<stdio.h>
#include<string.h>

int main (){
    char password[50];
    scanf("%s",password);
    
    if (strlen(password)>=8){
    printf("strong password");}
    
    else if (strlen(password)>=5){
    printf("min strong password");}
    
    else {
    printf("weak password ");}
    
    return 0;
}
