#include <stdio.h>
int main() {
    char letter;
    scanf("%c",&letter);

    if((letter>='A'&&letter<='Z')||(letter>='a'&&letter<='z')){
    printf("alphabet");
}
    else {
    printf("not alphabet");
}    
    return 0;
}