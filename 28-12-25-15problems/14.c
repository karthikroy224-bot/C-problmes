#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    if(num%2==0||num%3==0){
    printf("divisible");
}
    else{
    printf("not divisible");
}    
    return 0;
}