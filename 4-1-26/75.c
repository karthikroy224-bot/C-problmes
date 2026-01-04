#include <stdio.h>
int main() {
    int a11,a12,a21,a22;
    int b11,b12,b21,b22;
    int c11,c12,c21,c22;

    

    scanf("%d %d",&a11,&a12);    
    scanf("%d %d",&a21,&a22);    

    printf("\n");

    scanf("%d %d",&b11,&b12);    
    scanf("%d %d",&b21,&b22);    

    printf("\n");
    
    c11=(a11*b11)+(a12*b21);
    c12=(a11*b12)+(a12*b22);
    c21=(a21*b11)+(a22*b21);
    c22=(a21*b12)+(a22*b22);

    printf("%d %d\n",c11,c12);
    printf("%d %d",c21,c22);
    
    return 0;
}