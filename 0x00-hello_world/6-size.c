#include<stdio.h>
int main () {
	
	char d;
	int a;
        long int e;
	long long int c;
	float b;

	printf("Size of char: %zu bytes\n", sizeof(d));
	printf("Size of int: %zu bytes\n", sizeof(a));
	printf("Size of long int: %zu bytes\n", sizeof(e));
	printf("Size of long long int: %zu bytes\n",sizeof(c));
        printf("Size of float: %zu bytes\n",sizeof(b));

	return 0;
}
