#include <stdio.h>
#include<string.h>

int main() {
    char ch[20];
    fgets(ch,20,stdin);
    int count=0;
    for(int i=0;i<strlen(ch);i++){
        if (ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U'){
        count++;
        }
    }
    printf("%d",count);
    return 0;
}