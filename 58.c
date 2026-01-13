#include <stdio.h>
int main() {
    int n;
    int i;
    int sum=0;
    scanf("%d",&n);

    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}