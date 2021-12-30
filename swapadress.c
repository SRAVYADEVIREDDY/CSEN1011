#include<stdio.h>
void swap(int*x,int*y)
{
 int temp;
  temp =*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int a,b;
  printf("\n Enter the value of a:");
  scanf("%d",&a);
  printf("\n Enter the value of b:");
  scanf("%d",&b);
  printf("\n Before swapping a:%d",a);
  printf("\n Before swapping b:%d",b);
  swap(&a,&b);
  printf("\n After swapping a:%d",a);
  printf("\n After swapping b:%d",b);
  return 0;
}