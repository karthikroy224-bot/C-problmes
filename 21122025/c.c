#include <stdio.h>
int main() {
int units,total_units;
scanf("%d",&units);

if(units<=100)
printf("%d",units*1);

else 
printf("%d",(units-100)*2+100);



    return 0;
}