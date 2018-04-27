#include <stdio.h>

int main(){

int x;
int& rx = x; // from now on, rx is just like x.
// Unlike pointers, refs are not real objects in memory.
int* p = &x; // Ok
int* pr = &rx; // OK! but remember that rx is just x!
// i.e. rx is not something that exists alone, it has to refer to something else.
printf ("%d %d %p %p\n",x,rx,p,pr);
return 0;
}

