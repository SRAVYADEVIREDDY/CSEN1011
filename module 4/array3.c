#include <stdio.h>
#define SIZE 10
int main(void);
int list_of_integers[size];//array declaration
int element;
printf("Enter 5 integers:");
for(int i=0;i<SIZE;i++)
scanf("%d"&list of integers[i]);
printf("\n The elements in the list are...");
for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\nEnter the element to be searched: ");
  scanf("%d", &element);

  for (int i=0; i<SIZE; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }

