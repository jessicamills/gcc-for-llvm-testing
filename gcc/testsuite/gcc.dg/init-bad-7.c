/* PR c/37724 */
/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-std=gnu99 -pedantic" } */

struct f
{
  int *a;
};

char b[10];
struct f g = {b}; /* { dg-warning "initialization of 'int \\*' from incompatible pointer type|near initialization for" } */
