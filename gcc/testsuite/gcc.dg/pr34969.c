/* PR middle-end/34969 */
/* { dg-do compile } */
/* { dg-options "-O -fipa-cp -ffast-math" } */
/* { dg-require-effective-target gcc_internals } */

double
foo (double x)
{
  return x * x;
}

double
bar (void)
{
  return foo (0);
}
