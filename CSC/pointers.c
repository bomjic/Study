#include <stdio.h> 
int main(){ 
	int i[10];
	char c[10]; 
	int *pi = &i[1]; 
	char *pc = &c[0]; 
	printf("i %d\n", i[1]); 
	printf("pi %p\n",pi);
	return 0; 
}
