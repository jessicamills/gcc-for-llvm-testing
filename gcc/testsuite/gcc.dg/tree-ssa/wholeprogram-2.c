/* { dg-options "-O2 -fdump-tree-optimized -fwhole-program" } */
/* { dg-require-effective-target gcc_frontend } */
__attribute__ ((externally_visible))
void
externally_visible_function ()
{
}
/* { dg-final { scan-tree-dump "externally_visible_function" "optimized"} } */
