#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int first=0;
    int secound=1;
    int third;
    int i;
    for(i=1;i<n;i++){
        printf("%d ",first);
        third=first+secound;
        first=secound;
        secound=third;
    }
    printf("%d",first);
    return 0;
}