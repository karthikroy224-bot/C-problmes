#include <stdio.h>
int main() {
    int marks,income;
    scanf("%d",&marks);
    scanf("%d",&income);

    if (marks>=85&&income<=200000){
    printf("eligible");
}
    else{
    printf("not eligible");
}    
    return 0;
}