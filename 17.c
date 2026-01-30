#include <stdio.h>
int main() {
    int i,n,sum=0;
    scanf("%d",&n);

    for (i= 3;i<=n;i++){
    sum=sum+i;}
    printf("%d",sum);

    return 0;
}