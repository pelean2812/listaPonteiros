#include "gc.h"
#include <assert.h>
#include <stdio.h>
#include <time.h>

int main()
{
  int i;
  clock_t t;
  t = clock();
  for (i = 0; i < 10; ++i)
   {
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Tamanho heap = %d\n", GC_get_heap_size());
   }
    t = clock() - t;
    printf("Tempo de execucao: %lf milisegundos", ((double)t)/((CLOCKS_PER_SEC/1000)));
  return 0;
}