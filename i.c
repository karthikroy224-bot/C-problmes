#include <stdio.h>
int main() {
   char num;
   scanf("%c",&num);

if(num >='A'&& num <='Z')
printf("upper case");

else if (num >='a'&&num <='z')
printf("lower case");

else if (num >='0'&&num <='9')
printf("digit");

else 
printf("spacial character");


    return 0;
}

