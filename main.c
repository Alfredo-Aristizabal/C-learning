#include <stdio.h>
#define say_hello(name) printf("Hello " #name "\n")
#define call_someone(name) \
    printf(#name " come here \n")
#define min(x, y) ((x) > (y) ? (y) : (x))

/*
Macro pre definidas
 __DATE__
 __TIME__
 __FILE__
 etc...


 Macros parametrizadas
 ej:  #define say_hello(name) printf("Hello \n" #name)
*/

int main()
{
    printf("Date is %s\n", __DATE__);
    printf("Time is %s\n", __TIME__);
    printf("File is %s\n", __FILE__);
    say_hello(Dani);
    call_someone(Daniel);
    printf("The min number is %d", min(2, 3));

    return 0;
}