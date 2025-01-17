/* GCC doesn't generate any .eh_frame data for this TU itself, so it
   shouldn't warn about "a" conflicting with the built-in idea of
   .eh_frame.  The warning therefore belongs on the second decl.  */
/* { dg-options "-fno-unit-at-a-time" } */
/* { dg-require-named-sections "" } */
/* { dg-require-effective-target gcc_frontend } */
int a __attribute__((section (".eh_frame"))) = 1;
const int b __attribute__((section (".eh_frame"))) = 1; /* { dg-error "section type conflict" } */
