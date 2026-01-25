#include <stdio.h>
#include<string.h>

int main() {
    char ch[20];
    int count=0;
    fgets(ch,20,stdin);
    ch[strlen(ch)-1]='\0';
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            count++;
    }
    }
    printf("%d",count);


    return 0;
}