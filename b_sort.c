#include <stdlib.h> 
#include <stdio.h>
#include <stddef.h>

void bsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*)){
	int i,j;
	if(size == sizeof(int))
	  for(i = 0; i < num -1; i++)
	    for( j = 0; j < num-i-1; j++)
	      if((*compar)((int*)base+j+1, (int*)base+j) < 0){
		int aux = *((int*)base+j+1);
		*((int*)base+j+1) = *((int*)base+j);
		*((int*)base+j) = aux;
		}	      
	     
	else if(size == sizeof(double))
	  for(i = 0; i < num -1; i++)
	    for( j = 0; j < num-i-1; j++)
	      if((*compar)((double*)base+j+1, (double*)base+j) < 0){ 
		double aux = *((double*)base+j+1);
  		*((double*)base+j+1) = *((double*)base+j);
  		*((double*)base+j) = aux;		
		}
}

