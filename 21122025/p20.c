#include <stdio.h>
int main() {
  int correct_pass,enter_pass;
  correct_pass=888633;
  scanf("%d",&enter_pass);

  if(enter_pass==correct_pass )
  printf("access granted");

  else 
  printf("access denied");
    
    return 0;
}