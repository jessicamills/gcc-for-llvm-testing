/* { dg-do compile } */
/* { dg-options "-O3" } */
/* { dg-additional-options "-Wno-literal-conversion" } */

int a, b;
void fn1() {
  int c;
  char *d;
  for (; a; ++a) {
    int e, f;
    e = d[a];
    if ((!e && f) || (!f && e))
      ++c;
  }
  if (c)
    b = .499;
}
