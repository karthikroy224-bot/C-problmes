#include<stdio.h>
int main ()
{
  int age,test_score;
  scanf("%d",&age);
  scanf("%d",&test_score);
  
  if (age>=18&&test_score>=60){
      printf("Qualified ");
  }
    else{
    printf("not qualified ");
    }
    
    return 0;
}
