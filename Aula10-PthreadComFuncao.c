#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 10

void *funcao(void *arg) {

	printf("\nExecutando thread...\n");

	//pthread_exit(NULL);
}
void main() {

	pthread_t thread[NUM_THREADS];
	//pthread_t threads;
	int x,status;
	
	for(x=0; x<NUM_THREADS; x++) {

		printf("Criando uma thread...\n", x);
		status = pthread_create(&thread[x], NULL, funcao ,NULL);

		if (status != 0) {
			printf("\nErro na criacao da thread.\n");
		}
}
	for(x=0; x<NUM_THREADS; x++) {
		printf("\n Aguardando o termino da thread %d", x);
		pthread_join(thread[x], NULL);
	}
}
// para compilar tem colocar -lpthread


