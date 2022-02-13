#include<stdio.h>

int main() {
	int *ptr = NULL;	// Create interger pointer
	*ptr = 100;
	printf("Value of ptr is %p", ptr);
	
	return 0;
}