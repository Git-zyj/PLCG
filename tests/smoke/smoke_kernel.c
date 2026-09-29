/*
PLCG smoke-test kernel: a single perfectly nested loop nest.
*/
#include <stdio.h>
#include "smoke_kernel.h"

int main()
{
  int i, j;
  double A[N][N];
  double B[N][N];

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      A[i][j] = (double) (i + j);

#pragma scop
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      A[i][j] = A[i][j] + B[i][j];
#pragma endscop

  return (int) A[0][0];
}
