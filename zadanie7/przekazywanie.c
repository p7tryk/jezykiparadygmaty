#include <stdio.h>
int wartosc(int liczba)
{
  liczba+=5;
  return liczba;
}
int wskaznik(int * liczba)
{
  *liczba+=5;
  return *liczba;
}

int main()
{
  int liczba,kopia;
  printf("podaj liczbe\n");
  scanf("%d",&liczba);

  printf("\nprzez wartosc\n");
  kopia=liczba;
  printf("wartosc zwrocona %d\n", wartosc(kopia));
  printf("kopia %d\n", kopia);
  
  printf("\nprzez wzkaznik\n");
  kopia=liczba;
  printf("wartosc zwrocona %d\n", wskaznik(&kopia));
  printf("kopia %d\n", kopia);
  
  
}
