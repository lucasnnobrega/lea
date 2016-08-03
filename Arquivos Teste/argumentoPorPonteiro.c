#include <stdio.h>

void add(int* n){
	printf("%d\n", *n);
	*n += 2;
	printf("%d\n", *n);
}

int main(){
	int x = 5;

	add(&x);

	printf("%d\n", x);

    return 0;
}


