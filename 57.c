#include <stdio.h>

int main() {
    int num;
    int i;
    int fact=1;
    int temp;
    int sum=0;
    scanf("%d",&num);
    int ori=num;
    while(num>0){
       temp=num%10; 
    fact=1;
    for(i=1;i<=temp;i++){
        fact=fact*i;
    }
        sum=sum+fact;
        num=num/10;
    }
    //printf("%d",sum);
    
    if (sum==ori){
        printf("strong number");
    }
    
    else{
        printf("not a strong number ");
    }
    return 0;
}