#define size 10
#include<stdio.h>
int main(void){
  char name[size];
  printf("Enter 10 characters for name....\n");
  for(int index=0;index<5;index++)
  scanf("%d",&name[index]);
  printf("The elements entered are....\n");
for(int index=0;index<5; index++)
 printf("%d\t",name[index]);
  return 0;
}
