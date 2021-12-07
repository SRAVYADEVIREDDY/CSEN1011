#include<stdio.h>
int main()
{
  int n1=0,n2=1,n3=3,i,n;
  printf("Enter the numberof elements");
  scanf("%d",&n);
  printf("%d%dn",&n1,&n2);
  for(i=2,i<n;i++);
  {
    n3=n2+n1;
    printf("%d,"n3);
    n1=n2;
    n2=n3;

  }
  return 0;
}
