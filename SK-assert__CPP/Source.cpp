#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */
#include <conio.h>		/* getch() / _getch() */

void print_number(int* myInt) {
	assert(myInt != NULL);
	printf("%d\n", *myInt);
}

int main() {
	int a = 10;
	int* b = NULL;
	int* c = NULL;

	b = &a;

	print_number(b);
	print_number(c);

	_getch();
	return 0;
}