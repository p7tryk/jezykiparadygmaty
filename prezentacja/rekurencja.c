#include <stdio.h>
int silnia(int input)
{
  int output = 1;
  for(input;input>1;input--)
    output*=input;
  return output;
}
int silniarek(int input)
{
    if (input>0)
        return input*silniarek(input-1);
    return 1;
}
int main()
{
  int i=6;
  printf("%d\nsilnia iteracyjnie=%d\nsilnia rekurencyjnie=%d\n",i,silnia(i),silniarek(i));
}
