/* { dg-do compile } */
/* { dg-options "-O -fdump-tree-optimized" } */
/* { dg-require-effective-target gcc_frontend } */

int f(double a){double b=a;return !__builtin_islessequal(a,b);}
int g(double a){double b=a;return !__builtin_isgreaterequal(a,b);}

/* { dg-final { scan-tree-dump-times " unord " 2 "optimized" } } */
