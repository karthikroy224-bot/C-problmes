//28
#include <stdio.h>
int main() {
    float salary;
    scanf("%f",&salary);
    if(salary>=50000)
    printf("%f",salary-salary*0.1);

    else 
    printf("no tax");
    return 0;
}