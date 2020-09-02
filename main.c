#include <stdio.h>
#include <stdlib.h>

//Fibonacci recursivo limitado ao uso de variáveis de tipo primitivo;
int fibonacci(int n){
	if(n<2){
		return n;
	}
	else return fibonacci(n-1)+fibonacci(n-2);
}

int main(int argc, char *argv[]) {
	int n;
	printf("Enter the position: ");
	scanf("%d", &n);
	printf("\nThe value of the %dst position: %d", n, fibonacci(n));
	return 0;
}
