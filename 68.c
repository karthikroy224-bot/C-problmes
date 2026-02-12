#include <stdio.h>
int main() {

    int n;
    scanf(" %d",&n);
    int i,j,count;

    char ch[50];

    for(i=0;i<n;i++){
        scanf(" %c",&ch[i]);
    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(ch[i]==ch[j])
            count++;
        }
           printf("%c=%d\n",ch[i],count);

    }    
    return 0;
}