#include<stdio.h>
int main(){
  int i,j,rows,k=0;
  printf("Enter number of rows:");
  scanf("%d",&rows);
  for(i>=1;i=rows;i--)
  {
    for(j=0;j<=rows;j++)
   {
     printf("");
   } 
   
   for(k=0;k<(2*i-1);k++)
   {
printf("*");
   }
   printf("\n");
  }

  return 0;
}