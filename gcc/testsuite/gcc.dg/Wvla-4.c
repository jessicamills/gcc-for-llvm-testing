/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-pedantic-errors -std=c99 -Wvla" } */

extern void 
func (int i, int array[i]); /* { dg-warning "ISO C90 forbids variable length array 'array'" } */
