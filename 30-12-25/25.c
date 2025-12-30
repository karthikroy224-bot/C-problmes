#include <stdio.h>
int main() {
    int number,original,reverse_number=0,reminder;
    scanf("%d",&number);
    number=original;;
    while(number!=0){
    reminder=number%10;
    reverse_number=reverse_number*10+reminder;
    number=number/10;}

     if (reverse_number==original){
     printf("palindrome\n");
}
     else {
     printf("not a palindrome\n");
}    

    return 0;
}