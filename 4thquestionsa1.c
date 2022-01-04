/*Develop a C program to display nth term of a Fibonacci Series.  (up to 20th term).
Note - Fibonacci Series is 0, 1, 1, 2, 3, 5, 8, 13, ... */

/* Algorithm:
01. Start
02. Accept 'n'
03. Assign a = 0, b = 1 (
04. If n = 1 display a
    Else if n = 2 display b

05. c = a + b, a = b, b = C
repeat the steps if it is n-2
06. print c 
07. Stop.

# include <stdio.h>
int main(void) {
  int n, a=0, b=1, c;
  printf("Enter a positive integer : ");
  scanf("%d", &n);

  if (n == 1)
    printf("%d\n", a);
  else if (n == 2)
    printf("%d\n", b);
  else {
    for (int i = 1; i<= (n-2); i++){
      c = a + b;
      a = b;
      b = c;
    }
    printf("%d\n", c);
  }
  return 0;
}

/* Output:
Enter a positive integer : 1
0
Enter a positive integer : 2
1
r a positive integer : 2
1
/*Learning outcomes
if and else if statements/*
