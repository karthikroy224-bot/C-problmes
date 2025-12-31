#include <stdio.h>

int main() {
    int hours;
    scanf("%d",&hours);
    
    if (hours>40){
    printf("%d",(hours-40)*200);
}
    else {
        printf("no overtime pay ");
    }
    return 0;
} 

