/* { dg-do compile }  */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-std=c90 -pedantic-errors" }  */

double x = 0x3.1415babep0; /* { dg-error "use of C99 hexadecimal floating constant" }  */
