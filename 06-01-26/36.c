#include <stdio.h>
int main() {
    int n,i,x=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
    for(i=0;i<n;i++){
     if(arr[i]%2==1){
       x++;}
}
printf("%d",x);
return 0;
}