#include <stdio.h>
int main() {
    int reverse_number,number,reminder;
    scanf("%d",&number);

    while(number!=0){
    reminder=number%10;
    reverse_number=reverse_number*10+reminder;
    number=number/10;
}
printf("%d",reverse_number);
    return 0;
}