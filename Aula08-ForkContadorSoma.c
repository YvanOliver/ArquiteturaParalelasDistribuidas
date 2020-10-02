#include <stdio.h>
#include <unistd.h>


int contador, soma;


 void main() {
	
		 
	for(contador = 1; contador<100; contador++)
	{
	  sleep(2);	
	  printf("\n %d\n", contador);
	  } 
	 

	pid_t   filho1, filho2;
		
 	filho1 = fork(); 
	
	for(contador = 100; contador < 200; contador++)  
        {
	   sleep(1); 
	}
	   if(filho1 == 0) {
    	     printf("\n Iniciando processo filho1 PID=%d - proceso pai PID=%d\n" ,getpid(), contador); 
	}else if(filho1 < 100){ 
	  printf("\n Nao e possivel contar\n");
	} else { 

		filho2 = fork();	
		for(contador = 1000; contador<2000; contador++) { 		
		soma += contador;

		sleep(2);  
		}    
	 }    
          
	  printf("\nIniciando processo filho2 PID = %d - proceso pai PID = %d\n", getpid(),getppid());	
	  printf("\n A soma dos numeros de 1000 a 2000 eh: %d \n", soma);

}
