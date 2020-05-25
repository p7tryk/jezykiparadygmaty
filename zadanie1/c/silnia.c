#include <stdio.h>
int silnia(int number)
{
  int result = 1;
  for(number;number>1;number--)
    result*=number;
  return result;

}

int silniarek(int number)
{
  if(number>0)
    return number*silniarek(number-1);
  return 1;
}

int main()
{
  
  printf("podaj liczbe na ktorej n! chcesz policzyc\n");
  unsigned int number;
  scanf("%ud",&number);
  printf("Silnia interacyjnie:  %d\nsilnia rekurencyjnie: %d\n",silnia(number),silniarek(number));
    
  
}
