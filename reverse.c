#include<stdio.h>
int main()
{
  int n,r=0,rev;
  printf("Enter a n:");
  scanf("%d",&n);

  while(n!=0) {

  
  
    rev=n%10;
    r=(r*10)+rev;
    n=n/10;
  }
  if(n==rev)
  printf("n is a palindrome");
  else
  printf("n is not a palindrome");

  return 0;
}
