#include<stdio.h>
int main()
{
  int eng,tel,math,sci,soc,total;
 double avg ;
  printf("Enter marks of 5 subjects:");
  scanf("%d%d%d%d%d",&eng &tel &math &sci &soc);
  
 total= eng+tel+math+sci+soc;
 printf("total marks: %d",total);
 
avg=total/5;
printf ("Average marks: %lf",avg);
return 0;
}
