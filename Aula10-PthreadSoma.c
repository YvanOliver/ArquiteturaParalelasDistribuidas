#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4

int t1, t2, t3, t4, soma;
	 
 void main() {
    
        pthread_t thread[NUM_THREADS];

        int t1;
                
             printf("\nContando Thread 1...\n");
        
        	for(t1 = 1; t1<=100; t1++) {                                    
            	 
                  printf("\n%d\n", t1);
	  } 
    
         int t2;
                
              printf("\nContando Thread 2...\n");
        
        	for(t2 = 100; t2<=250; t2++) {                                    
            	 
                  printf("\n%d\n", t2);
            }

         int t3;
                
             printf("\nContando Thread 3...\n");
        
        	for(t3 = 300; t3<=500; t3++) {                                    
            	 
                  printf("\n%d\n", t3);
            }

         int t4;
                
             printf("\nContando Thread 4...\n");
        
        	for(t4 = 1000; t4<=2000; t4++) {                                    
            	 
                  printf("\n%d\n", t4);

            }
                soma = t1+t2+t3+t4;
                printf("\n A soma Total dos numeros contados eh: %d \n", soma);

      
}
       
