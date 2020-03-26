#include <stdio.h>
int kwadrat(int * number) //argument=wskaźnik
{
  *number*=*number;
  return *number; //zwracamy wyłuskaną wartość wzkaznika
}
int main()
{
  int i = 15;
  printf("%d\n",i);
  kwadrat(&i); // &i zwraca wzkaźnik na i
  printf("%d\n",i);
}
