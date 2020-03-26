#include <stdio.h>
class kraj
{
  char * name = "Polska" ;
  int pop = 50000000;
public:
  int print()
  {
    printf("%s populacja=%d\n",name,pop);
    return pop;
  }
};
int main()
{
  kraj polska;
  int i=polska.print();
  printf("%d\n",i);
}
