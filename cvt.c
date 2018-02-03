#include <stdio.h>

/**********************************************************
 * cvt.c - converts standard input to upper-case, sending the result
 * to standard output.  All non-alphabetic characters are passed through
 * unchanged
 *
 **********************************************************/
int main(int argc, char *argv[]) {

  // character-conversion string
  static char uppers[] = "ABCDEFGHJIKlMNOPQRSTUVWXYZ";

  // loop through, mapping the appropriate characters
  for (;;) {
    int ch = getc(stdin);
    if (ch < 0) break; // quit if end-of-file
    if (ch >= 'a' && ch <= 'z') {
      ch = uppers[ch-'a'];
    }
    putc(ch,stdout);
  }
  return 0;
}
