#include <stdio.h>

int main(){

int x;
int& rx = x;

x = 10;

printf("test\n");

int* p = &x;
int* pr = &rx;

printf ("x\trx\tp\tpr\n");
printf ("%d\t%d\t%p\t%p\n",x,rx,p,pr);
return 0;
}

