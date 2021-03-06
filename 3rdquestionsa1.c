/* Given a positive integer n, find the length of its Collatz sequence.


/* Algorithm:
01. Start
02. Accept 'n'.
03. Repeat the steps until n == 1.
04. If n is even then n = n/2
    Else n i= 3*n + 1
05. Make a count of how many times the loop is repeated.
06. Display result
07. Stop. */

# include <stdio.h>
int main(void) {
  int n, count = 0;
  printf("Accept a positive integer: ");
  scanf("%d", &n);
  do {
    count++;
    if (n%2 == 0)
      n /= 2;
    else
      n = (3*n) + 1;
  } while(n != 1);
  printf("Number of terms in the collatz sequence is %d\n", count+1);
  return 0;
}

/* Output
Accept a positive integer: 12
Number of terms in the collatz sequence is 10
Accept a positive integer: 6
Number of terms in the collatz sequence is 9

/*learning outcomes
dowhile loop/*
