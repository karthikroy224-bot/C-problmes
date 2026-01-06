#include <stdio.h>
int main() {
    int n,i,x=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

    int target;
    scanf("%d",&target);
     
    for(i=0;i<n;i++){
      if(arr[i]==target){
        x=1;}
}
    if(x){
    printf("found");
}
    else{
    printf("not found");   
}
return 0;
}