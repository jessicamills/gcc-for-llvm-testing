/* PR 16216 */
/* { dg-require-effective-target gcc_frontend } */

void func()
{
        const char *pek; int i;
        pek=__builtin_va_arg(ap,const char*);	/* { dg-error "" } */
}
/* { dg-message "undeclared identifier is reported only once" "reminder" { target *-*-* } 0 } */
