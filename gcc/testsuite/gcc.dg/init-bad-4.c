/* PR c/25875 */
/* Origin: Richard Guenther <rguenth@gcc.gnu.org> */
/* { dg-do compile } */
/* { dg-additional-options "-Wno-parentheses" } */
/* { dg-require-effective-target gcc_internals } */

struct A { } a = (struct A) {{ (X)0 }};  /* { dg-error "no members|extra brace|near|undeclared|constant|compound|excess" } */
