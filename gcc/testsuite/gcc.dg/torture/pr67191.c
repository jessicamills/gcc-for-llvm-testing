/* { dg-do compile } */
/* { dg-options "-w" } */

int a;
void f(void)
{
  int b;
  for(a=1; a;);
  for(; b; b++)
    lbl:
	b || a;
  if(a)
    goto lbl;
}
