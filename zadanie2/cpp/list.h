#pragma once 
#include <stdio.h>

class element{
public:
  element(int input) {numer=input;};
  element * m_next;
  element * m_prev;
  int numer;
  int getNumber() {return numer;};
};


class elementList{
 private:
  element * m_begin;
  element * m_end;
  int m_size;
 public:
  elementList();
  ~elementList();
  int getSize();
  void addBegin(element * elementptr);
  void addEnd(element * elementptr);
  void info();
  void printall(int mode = 0);
  void removeall();
  element * getBegin() {return m_begin;};
  element * getEnd() {return m_end;};
  element * getNext(element * ptr) {return ptr->m_next;};
  element * getPrev(element * ptr) {return ptr->m_prev;};
};
elementList::elementList()
{
  m_begin = m_end = nullptr;
  m_size = 0;
}
elementList::~elementList()
{
  printf("destruktor\n");
  removeall();
}
void elementList::removeall()
{
  if(m_size==0)
    return;
  printf("removing\n");
  //info();
  element * ptr;
  int freed = 0;
  for(ptr=m_begin;ptr!=nullptr;ptr=ptr->m_next)
    {
      if(ptr->m_next!=nullptr)
	{
	  delete ptr->m_prev;
	  freed++;
	}
      else
	{
	  delete ptr;
	  freed++;
	  break;
	}
    }
  m_begin=m_end=nullptr;
  m_size=0;
  //printf("\nremoved %d records,freed %ld bytes\n", freed, freed*sizeof(element));
}
int elementList::getSize()
{
  return m_size;
}
void elementList::addBegin(element * elementptr)
{
  
  elementptr->m_next = m_begin;
  elementptr->m_prev = nullptr;
  m_begin = elementptr;
  
  if(m_end==nullptr)
    {
      m_end = elementptr;
    }
  else
    elementptr->m_next->m_prev = elementptr;
   
  m_size++;
}
void elementList::addEnd(element * elementptr)
{
  
  elementptr->m_prev = m_end;
  elementptr->m_next = nullptr;
  m_end = elementptr;
  
  if(m_begin==nullptr)
    {
      m_begin = elementptr;
    }
  else
    elementptr->m_prev->m_next = elementptr;
   
  m_size++;
}

void elementList::info()
{
 
  printf("\nbegin = %p, end = %p\n",m_begin,m_end);
}
void elementList::printall(int mode)
{
  printf("wypisywanie listy\n");
  element * ptr = m_begin;
  for(ptr = m_begin;ptr;ptr=ptr->m_next)
    {
      if(mode!=0)
	printf("this = %p, prev = %p, next = %p\n",ptr,ptr->m_prev,ptr->m_next);
      printf("%d\n",ptr->getNumber());
    }
}
