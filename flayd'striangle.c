#include<stdio.h>
int main()
{
  int i,j,rows,x=1;
  printf("Enter number of rows:");
  scanf("%d",& rows);

    for(i=1;i<=rows;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("2%d",& x);
      x++;
    }
printf("\n");
  }
return 0;
}
