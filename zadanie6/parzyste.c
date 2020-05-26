#include <stdio.h>
#include <stdlib.h>

void parzyste(int * ptr, int length)
{
  for(int i = 0;i<length;i++)
    {
      if(!(ptr[i]%2))
	printf("%d ",ptr[i]); 
    }
  printf("\n");
}

int main()
{
  int liczba;
  printf("podaj dlugość tablicy\n");
  scanf("%d",&liczba);

  int * ptr = (int*) malloc(liczba* sizeof(int));
  
  for(int i=0; i<liczba;i++)
    {
      printf("podaj element %d\n",i+1);
      scanf("%d",&ptr[i]);
    }
  parzyste(ptr, liczba);
  free(ptr);
  
}
