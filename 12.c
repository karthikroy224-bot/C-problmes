#include <stdio.h>
int main() {
     int num;
     scanf("%d",&num);

     if (num>=0&&num<=9){
     printf("single digit");
}
     else{
     printf("not single digit");
}    
    return 0;
}