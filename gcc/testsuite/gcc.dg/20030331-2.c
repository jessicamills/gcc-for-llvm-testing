// { dg-options "" }
/* { dg-require-effective-target alloca } */
/* { dg-require-effective-target nested_func } */

extern int printf (const char *, ...);

int foo() {
  int yd;
  float in[1][yd];
 
  void bar() {
    printf("%p\n",in[0]);
  }
}
