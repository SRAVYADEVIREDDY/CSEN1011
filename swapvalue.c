#include<stdio.h>
  int swap (int a, int b)
  {
  int d;
  d=a;
  a=b;
  b=d;
}
int main()
{
int x,y;
printf("before swapping the number\n",x,y);
scanf("%d%d",&x,&y);
swap (x,y);
printf("after swapping the number\n,x=%d,y=%d",x,y);
return 0; 
}

