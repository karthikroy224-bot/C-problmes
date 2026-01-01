#include <stdio.h>
int main() {
int rating ;
scanf("%d",&rating);

if (rating>=8){
printf("Excellent");
}
else if (rating >=5){
printf("Average");
}
else{ 
printf("flop");
}
    return 0;
}