/* Nested functions shouldn't produce warnings if defined before first use.
   Bug 36774. Test with -Wmissing-declarations. */
/* { dg-do compile } */
/* { dg-require-effective-target gcc_frontend } */
/* { dg-options "-Wmissing-declarations" } */
/* { dg-require-effective-target nested_func } */

int foo(int a) { /* { dg-warning "no previous declaration" } */
    int bar(int b) { return b; } /* { dg-bogus "no previous declaration" } */
    return bar(a);
}
