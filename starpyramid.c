#include<studio.h>
int main(){
  int i,j,rows;
printf("Enter the number of rows:");
scanf("%d",& rows);
for(i=1,1<=rows,++i)
{
  for (j=1,j<=i,++j)
  {
    printf("*");
  }
  printf("\n");
}
return0;
}