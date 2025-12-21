//22
#include<stdio.h>
int main(){
float bill;
scanf("%f",&bill);
if (bill>=5000)
printf("%f",bill-bill*0.1);
else
printf("%f",bill-bill*0.05);

    return 0;
}