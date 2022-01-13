# include <stdio.h>
# define SIZE 10
int main(void){
  int list_of_integers[SIZE];  
  
  printf("Integers are chosed randomly");
  for (int i=0; i<SIZE; i++)
    list_of_integers[i] = rand()%10;

  printf("\nThe elements in the list before sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
    
  
  for(int i=0; i<SIZE; i++)
    for(int j=0; j<SIZE-i-1; j++)
      if(list_of_integers[j] > list_of_integers[j+1]){
        int temp = list_of_integers[j];
        list_of_integers[j]=list_of_integers[j+1];
        list_of_integers[j+1] = temp;
      }
  
  printf("\nThe elements in the list after sorting are ...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\n");
  return 0;
}
/*output
the elements before sorting are
3 6 7 5 3 5 6 2 9 1
the elements after sorting are
1 2 3 3 5 5 6 6 7 9/*
/*learning outcomes
sorting techinque/*
