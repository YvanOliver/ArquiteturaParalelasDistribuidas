#include <stdio.h>
int a = 1;	// VARIAVEL GLOBAL
int sub1(void) {
	int a = 5;
	printf(“\nO valor de ‘a’ e %d”,a);
}
int main (void) {
	int b = 2; // VARIAVEL LOCAL
	sub1();
	printf(“\nValor da variavel ‘a’: %d”,a);
	printf(“Valor da variavel ‘b’: %d”,b);
}
