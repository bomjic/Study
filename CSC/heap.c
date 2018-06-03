#include <stdlib.h>
#include <stdio.h>

int main(){
	int *p = (int*) malloc(10*sizeof(int));

	p[0] = 0;
	p[10] = 10;
	p[-1] = -1;

	printf("%d %d %d",p[0],p[10],p[-1]);

	free (p);

	return 0;
}

