/* Basic test on number of inserted callbacks.  */
/* { dg-do compile } */
/* { dg-options "-fsanitize-coverage=trace-pc -fdump-tree-optimized" } */
/* { dg-require-effective-target gcc_frontend } */

void foo(void)
{
}

/* { dg-final { scan-tree-dump-times "__builtin___sanitizer_cov_trace_pc \\(\\)" 1 "optimized" } } */
