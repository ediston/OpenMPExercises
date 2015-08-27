/*
gcc -fopenmp 1B.c  
export OMP_NUM_THREADS = 4
./a.out
*/

#include<stdio.h>
#include<omp.h>

int main(){
  #pragma omp parallel // <---- says give me default # of threads
  {
    int ID  = omp_get_thread_num(); // get the thread I am running on
    printf("hello(%d)\n", ID);
    printf("world(%d)\n", ID);
  }
  return 0;
}
