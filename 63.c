#include <stdio.h>
int main() {

    int s,e,i,j,count;
    scanf("%d",&s);
    scanf("%d",&e);

    for(i=s;i<=e;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
        printf("%d\n",i);
        }
    }
    return 0;
}