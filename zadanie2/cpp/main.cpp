#include <stdio.h>
#include "list.h"
int sum(elementList * list)
{
  int sum = 0;
  element * ptr = list->getBegin();
  while(ptr!=nullptr)
    {
      sum += ptr->getNumber();
      ptr=list->getNext(ptr);
    }  
  return sum;
}

int main(int argc, char ** argv)
{
  printf("ten program nie uzywa c++ list:: tylko implementuje zmodofikowaną własną z programowania3\n");
  elementList lista;
  int amount = 0;
  printf("podaj liczbe elementów\n");
  scanf("%d",&amount);
  for(int i= 0; i<amount;i++)
    {
      int input;
      element * ptr;
      printf("podaj element %d\n", i+1);
      scanf("%d", &input);
      ptr = new element(input);
      lista.addEnd(ptr);
    }
  lista.printall();
  printf("suma = %d\n",sum(&lista));
}
	 
