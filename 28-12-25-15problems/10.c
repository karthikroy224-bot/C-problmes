#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);

    if (marks>=85&&marks<=100){
    printf("Grade A");
}
    else if(marks>=46&&marks<=84){
    printf("Grade B");
}
    else {
    printf("Grade C");
}    
    return 0;
}