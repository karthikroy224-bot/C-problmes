//Amount ≥ 10000 → 20%, ≥ 5000 → 10%, else 5%

#include <stdio.h>
int main() {
    float amount;
   scanf("%f",&amount);

   if(amount>=10000){
   printf("%f",amount=amount-amount*0.2);}

   else if(amount>=5000){
   printf("%f",amount=amount-amount*0.1);}

   else{
   printf("%f",amount=amount-amount*0.05);}

    return 0;
}