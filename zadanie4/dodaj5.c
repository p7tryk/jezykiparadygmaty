#include <stdio.h>
int dodaj1(int liczba)
{
  return liczba+5;
}
int dodaj2(int liczba)
{
  for(int i=0; i<5;i++)
    {
      liczba++;
    }
  return liczba;
}


int main()
{
  int liczba;
  printf("podaj liczbe calkowitą\n");
  scanf("%d",&liczba);
  printf("wynik1: %d\nwynik2: %d\n",dodaj1(liczba),dodaj2(liczba));

  
}
