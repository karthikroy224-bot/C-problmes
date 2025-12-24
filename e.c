// Problem Statement:
// Validate login credentials.
// Description:
// Username must be admin and password must be 1234.
// Input Format:
// A string and an integer.
// Output Format:
// Print Login Successful or Login Failed.
// Input:
// admin 1234
// Output:
// Login Successful

#include <stdio.h>
#include<string.h>
int main() {

char user_name[50];
scanf("%s",&user_name);

int password;
scanf("%d",&password);

if(strcmp(user_name,"admin")==0){
    if (password==1234)
      printf("Login successful");
}
else{
printf("Login failed");}      

    return 0;
}