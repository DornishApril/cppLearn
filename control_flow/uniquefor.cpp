#include <stdio.h>
#include <ctype.h>
int main(void)
{
 char ch;
 for(;;) {//infinite loop
 ch = getc(stdin);
 if(ch == '.') break;
 if(isalnum(ch)) printf("%c is alphanumeric\n", ch);
 }
 return 0;
}
// Since often a loop control variable in a for is needed only by that loop, the
// declaration of the variable in the initialization portion of the for is becoming common
// practice. Remember, however, that this is not supported by C.


