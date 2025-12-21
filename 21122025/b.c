#include <stdio.h>
int main() {
float salary;
scanf("%f",&salary);
if (salary>=30000)
printf("%f",salary+salary*0.1);

else
printf("%f",salary+salary*0.15);

    return 0;
}