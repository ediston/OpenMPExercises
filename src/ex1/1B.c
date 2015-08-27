/*
gcc -fopenmp 1B.c  
export OMP_NUM_THREADS = 4
./a.out
*/

#include<stdio.h>
#include<omp.h>

int main(){
  #pragma omp parallel
  {
    int ID  = 0;
    printf("hello(%d)\n", ID);
    printf("world(%d)\n", ID);
  }
  return 0;
}
