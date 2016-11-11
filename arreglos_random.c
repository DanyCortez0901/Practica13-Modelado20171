#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 

int* arreglo_int(size_t num, int min, int max){	
	srand(time(NULL));
	int i;
	int *arreglo = (int*) calloc(num, sizeof(int));
	for(i = 0; i < num; i++)
		arreglo[i] = (rand() % (max + 1 - min)) + min; 
	return arreglo; 
}

double* arreglo_double(size_t num, double min, double max){
	srand(time(NULL));
	double *arreglo = (double*) calloc(num, sizeof(double));
	int i;
	for(i = 0; i < num; i++){ 
		double limite = (max - min);
	    	double aux = RAND_MAX / limite; 
	    	double numero = min + (rand() / aux); 
		arreglo[i] = numero;	
	}
	return arreglo; 
}
