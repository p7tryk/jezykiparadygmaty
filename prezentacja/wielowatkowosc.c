#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS     5

void *PrintHello(void *threadid)
{
  long tid;
  tid = (long)threadid;
  for(int i = 0; i<5; i++)
    {
      printf("#%ld=%d\n",tid,i);
    }
  pthread_exit(NULL);
}

int main ()
{
  pthread_t threads[NUM_THREADS];
  int rc;
  int t;
  for(t=0; t<NUM_THREADS; t++){
    printf("tworze wątek %ld\n", t);
    rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
    if (rc){
      printf("pthread_create %d", rc);
      exit(-1);
    }
  }
  pthread_exit(NULL);
}
