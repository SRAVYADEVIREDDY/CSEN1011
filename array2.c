#include<stdio.h>
int main(void){
  int marks[5];
  printf("Enter 5 values for marksarray....\n");
  for(int index=0;index<5;index++)
  scanf("%d",&marks[index]);
  printf("The elements entered are....\n");
for(int index=0;index<5; index++)
 printf("%d\n",marks[index]);
  return 0;
  
}