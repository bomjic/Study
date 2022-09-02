#include <stdio.h>

int main(){

int x;
int& rx = x;

x = 10;

printf("test\n");

int* p = &x;
int* pr = &rx;

printf ("x rx p pr \n");
printf ("%d %d %p %p\n",x,rx,p,pr);
return 0;
}

