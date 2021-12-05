ALGORITHM TO FIND A NUMBER IS PRIME OR COMPOSITE
1.START
2.ACCEPT A  POSITIVE INTEGER'n'(NUMBER GREATER THAN 2)
3.INTIALISE COUNTER WITH VALUE 2
4.DIVIDE THE NUMBER WITH COUNTER VALUE
5.IF THE REMAINDER IS 0 DISPLAY THE POSITIVE NUMBER IS COMPOSITE
6. ELSE INCREMENT THE COUNTER AND REPEAT FROM STEP 4 UNTIL THE COUNTER VZLUE IS LLESS THAN 'n'
7.AFTER COMPLECTION OF ALL THE STEPS DISPLAY THE NUMBER IS PRIME.
   8.stop.
   
   program
   
   #include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? counter;
   ?? n;
   ?? flag;

   raptor_prompt_variable_zzyz ="Accept a positive integer greater than2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   counter =2;
   flag =false;
   while (!(n % counter==0))
   {
      counter =counter+1;
      if (counter<n)
      {
      }
      else
      {
         cout << "Number is prime" << endl;         flag =true;
      }
   }
   if (flag==true)
   {
   }
   else
   {
      cout << "Number is composite" << endl;   }

   return 0;
}
