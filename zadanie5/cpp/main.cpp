#include <stdio.h>
#include "list.h"
elementList * join(elementList * list1, elementList * list2, elementList * list3)
{
  join(join(list1,list2),list3);
  return list1;
}


elementList * join(elementList * list1, elementList * list2)
{
  list2->m_begin->m_prev = list1->m_end;
  list1->m_end->m_next = list2->m_begin;
  list1->m_end = list2->m_end;
  //cleanup list2
  list2->m_end = nullptr;
  list2->m_end = nullptr;
  list2->m_size = 0;
  delete list2;

  return list1;
}

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
elementList * create()
{
  int amount = 0;
  elementList * listaptr = new elementList;
  printf("podaj liczbe elementów\n");
  scanf("%d",&amount);
  for(int i = 0; i<amount;i++)
    {
      int input;
      element * ptr;
      printf("podaj element %d\n", i+1);
      scanf("%d", &input);
      ptr = new element(input);
      listaptr->addEnd(ptr);
    }
  return listaptr;
}


int main(int argc, char ** argv)
{
  printf("ten program nie uzywa c++ list:: tylko implementuje zmodofikowaną własną z programowania3\n");
  printf("tutaj nie widzialem jaki ma byc wynik tego zadania więc przyjąłem że lista2 jest dołączana do listy1 a lista 2 zwalniana\n");

  elementList * lista1 = create();
  elementList * lista2 = create();
  elementList * lista3 = create();
  lista1->printall();
  lista2->printall();
  lista3->printall();
  join(lista1,lista2,lista3);
  lista1->printall();
}
	 
