/* { dg-do compile } */
/* { dg-options "-ftree-loop-distribute-patterns" } */
/* { dg-require-effective-target gcc_internals } */

void foo (volatile int *p, int n)
{
  int i;
  for (i = 0; i < n; ++i)
    p[i] = 0;
}

/* { dg-final { scan-assembler-not "memset" } } */
