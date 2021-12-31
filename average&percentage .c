

//algorithm to caluculate average & percentage of marks of 5 subjects of a student
//1..Start
//2.Accept english marks=a
//3.Accept telugu marks=b
//4.Accept maths marks=c
//5.Accept science marks=d
//6.Accept social marks=e
//7.Excute average=a+b+c+d+e/5
//8.Excute percentage=a/100,b/100,c/100,d/100,e/100
//9.stop


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
