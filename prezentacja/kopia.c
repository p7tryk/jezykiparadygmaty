#include <stdio.h>
int kwadrat(int number)
{
  number*=number;
  return number;
}
int main()
{
  int i=8;
  int n=i;
  printf("i=%d, n=%d\n",i,n);
  n = kwadrat(i);
  printf("i=%d, n=%d\n",i,n);
}
