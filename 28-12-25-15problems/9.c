#include <stdio.h>
int main() {
    char letter;
    scanf("%c",&letter);

    if(letter>='A'&&letter<='Z')
    printf("upper case");

    else if (letter>='a'&&letter<='z')
    printf("lower case");

    else 
    printf("invalid input");
    
    return 0;
}