#include <stdio.h>
int main() {
int usage ;
scanf("%d",&usage);

if (usage<=1){
printf("high speed");
}
else if (usage <=2){
printf("medium speed");
}
else{ 
printf("low speed");
}
    return 0;
}