
#include<stdio.h>

int main() {
	int n;
	printf("SERIE ULAM - INGRESE N�MERO : ");
	scanf("%i",&n);
	while ((n!=1)) {
		printf("%i ",n);
		if ((n%2)==0) {
			n = n/2;
		} else {
			n = 3*n+1;
		}
	}
	printf("\n");
	return 0;
}

