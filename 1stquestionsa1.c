/*Develop a C program to covert upper-case character to a lower-case character and vice versa.

/* Algorithm
01 Start
02. Accept a character 'a' as input.
03. If 'a' is not an alphabet Display "Incorrect Data". 
Else if 'a' is lower case character then subtract 32 from the ASCII value of 'a' Display 'a'.
Else add 32 to ASCII value of 'a' and Display 'a'
04. Stop  */

# include <stdio.h>

int main(void){
  char a;
  printf("Enter a character: ");
  a = getchar();
  if ( (a<= 122) && (a>= 97))
    ch -= 32;
  else if ( (a<= 90) && (a >= 65))
    ch += 32;
  else {
    printf("Incorrect Data\n");
    return 0;
  }
  printf("Changed case is %c\n", a);
  return 0;
}
/* Output:
Enter a character: 543
Incorrect Data
Enter a character: d
Changed case is D
Enter a character: V
Changed case is v  */

/* Learning
else if statements/*
