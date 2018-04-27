#include <stdio.h> 
int main(){ 
	int i[10];
	i[1]=254;
	char c[10]; 
	int *pi = &i[1]; 
	char *pc = &c[0]; 
	printf("i %d\n", i[1]); 
	printf("pi %p\n",pi);
	int *p1 = i;
	int *p2 = &i[0];
	printf("%p %p\n", p1, p2);
	p1++;
	int j = *p1;
	printf("%d\n", j);
	return 0; 
}
