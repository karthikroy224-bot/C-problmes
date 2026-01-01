#include <stdio.h>

int main() {
    int n;
    int i;
    scanf("%d",&n);
    
    for(i=65 ; i<65+n ; i++){
    printf("%d %c\n",i,i);
}
    return 0;
}