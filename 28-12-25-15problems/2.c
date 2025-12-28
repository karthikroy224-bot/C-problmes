#include <stdio.h>

int main() {
    int numb;
    scanf("%d",&numb);
    
    if (numb>0){
    printf("positive");}
    
    else if (numb==0){
    printf("zero"); }
    
    else{
    printf("negative");}

    return 0;
}