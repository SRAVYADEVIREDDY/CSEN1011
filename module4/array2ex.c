#include<stdio.h>
int main(void){
  int marks[5];
  printf("Enter 5 values for marks array....\n");
  for(int index=0;index<5;index++)
  scanf("%d",&marks[index]);
  printf("The elements entered are....\n");
for(int index=0;index<5; index++)
 printf("%d\t",marks[index]);
  return 0;
  
}
/*output
Enter 5 values for marks array....
9 3 6 77 1
The elements entered are...
9 3 6 77 1/*
/* learning outcomes
declaration of array/*