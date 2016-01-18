#include <stdint.h>
#include <stdlib.h>
#include "wrk.h"

/* The worker function for the threads */
void * myFun (void * x){
  uint64_t i, numThreads;
  uint64_t locSum = 0;
  struct params * b = (struct params *) x;
  numThreads = b -> pthreadNum;
  for (i = 0; i < (uint64_t)(SIZE/numThreads); ++i){
    locSum += b->arr[i];
  }
  b->sum = locSum;
  //pthread_exit(NULL);
  return NULL;
  }

