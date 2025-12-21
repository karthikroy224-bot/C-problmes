#include <stdio.h>
int main() {
    int angle1,angle2,angle3,sa;
    scanf("%d %d %d",&angle1,&angle2,&angle3);
sa=angle1+angle2+angle3;

    if (sa==180){
    printf("eq triangle");}

    else {
    printf("not eq triangle");}


    return 0;
}