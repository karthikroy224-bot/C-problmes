#include <stdio.h>
int main() {
    int i,j,n,sum=0,count;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        count=0;

    for(j=1;j<=i;j++){
        if(i%j==0){
            count++;
        }
    }

        if(count==2){
        sum=sum+i;
        }
    }
    

    printf("%d",sum);
    return 0;
}