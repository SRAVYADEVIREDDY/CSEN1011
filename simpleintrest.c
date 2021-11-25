#include<stdio.h>
int main(){
  int p,t,r;

  printf("principle=");
  scanf("%d" ,&p);

  printf("time period=");
scanf("%d" ,&t);

printf("rate of intrest");
scanf("%d" ,&r);

printf("simple intrest= %d/n",(p*t*r/100) );
printf("compound intrest=%d/n",(p*(1+r/100)*t ) );

return 0;

}