#include <stdio.h>

int main(){

int x;
int& rx = x;

x = 10;

int* p = &x;
int* pr = &rx;

printf ("x\trx\tp\tpr");
printf ("%d %d %p %p\n",x,rx,p,pr);
return 0;
}

