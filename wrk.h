#define NTHREADS 4
#define SIZE NTHREADS*100000000L

struct params {
  uint64_t * arr;
  uint64_t pthreadNum;
  uint64_t sum;
  };  

void * myFun (void *x);







