#include <stdio.h>
#include<string.h>
int main() {

    char ch1[50];
    char ch2[50];
    scanf("%s",ch1);
    int i;
    int j=0;
    
    for(i=strlen(ch1)-1;i>=0;i--){
        ch2[j]=ch1[i];
        j++;
    }

    printf("%s\n",ch1);
    printf("%s\n",ch2);

    if(strcmp(ch1,ch2)==0){
        printf("palindrome");
    }

    else{
        printf("not a palindrome");
    }
    return 0;
}