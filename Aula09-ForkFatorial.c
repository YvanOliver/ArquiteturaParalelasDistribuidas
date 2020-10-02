#include <stdio.h>
#include <unistd.h> //biblioteca Fork

double calculaFatorial (int numero) {  //double: para não estourar os bits

	double fatorial=1;
	int x;
	
	for (x=1;x<=numero;x++) {
		fatorial = fatorial * x;
	}
	
	printf("O valor de %d! é %.0lf\n", numero,fatorial);

	return fatorial;

}

int incrementaVariavel (int numero) {

	int x, valor=0;

	for (x=1;x<=numero;x++) {
		valor++;
	}

	printf("O valor final de valor é %d\n",valor);

	return valor;

}

void main() {

	  pid_t	processoFilho1, processoFilho2;
	double	fatorial;
	int	inc;

       processoFilho1 = fork();

	if (processoFilho1 == 0) {
		printf("\nIniciando processo filho1 PID=%d - processo pai PID=%d\n", getpid(),getppid());
		inc = incrementaVariavel(1000000); 
	} else if (processoFilho1 < 0) {
		printf("\nImpossivel criar processo filho\n");
	} else {

		processoFilho2 = fork();

	if (processoFilho2 == 0) {
		printf("\nIniciando processo filho2 PID=%d - processo pai PID=%d\n", getpid(),getppid());
		fatorial = calculaFatorial(100);
	} else if (processoFilho2 < 0) {
		printf("\nImpossivel criar processo filho2\n");
	} else {
		
		printf("Estou no processo pai\n");
		printf("O valor da soma do incr e fatorial é: %.0lf\n", fatorial+inc);

	}
 }
}


//OBS :			fork (<0, =0 ou >0)	
	//		sleep 100 espera em segundos


