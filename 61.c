// #include <stdio.h>
// #include<math.h>

// int main() {
//     int b,p,result;
//     scanf("%d %d",&b,&p);
//     result=pow(b,p);
//     printf("%d",result);
//     return 0;
// }

#include<stdio.h>
int main (){
    int b,p,result=1;
    scanf("%d %d",&b,&p);

    for(int i=0;i<p;i++){
    result=result*b;
    }
    printf("%d",result);

    return 0;
}