Algorithm to caluculate simple and compound intrest
1.start
2. enter the principle as p
3.enter the rate of intrest as r
4.enter the time period as t
5.simple intrest=p*t*r/100
6.compound intrest=p*(1+r/100)*t
7.end



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

/* Output:
Run - 1
Principle = 100
Rate of Interest = 2
Time period = 2
Simple Interest = 4~/CSEN1011-2/Module-01 Programs$ gcc 01-simple-interest.c
