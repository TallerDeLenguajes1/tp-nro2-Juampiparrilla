#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 15


int main(){
	
	int *puntero,matriz[F][F],*vector,contador=0,C;
	srand(time(NULL));
	vector = (int*) malloc(F * sizeof(int));
	puntero=(int*)matriz;
	
	//int matriz[F][C];	
	//puntero = &matriz[0][0];
		
	for(int i=0 ; i<F ; i++){
		
		C = rand()%(15-5+1)+5;
		
		puntero =(int*)malloc(C*F*sizeof(int));
		
		for(int j=0; j<C; j++){
			*(puntero + ( i*F +C )) = rand()%(999-100+1)+100;
			  
			if(*(puntero + ( i*F +C )) % 2==0){
				  contador++;
			  }
		 	  printf("%5.d",*(puntero +( i*F +C )));
			
		}
		
		vector[i]=contador;
		contador=0;
		printf("\n");
	}
	printf("\n EL VECTOR CON Nº PARES: \n");
	for(int j=0; j<F; j++){
		printf("Fila [%d] : %d \n",j+1, vector[j] );
	}
	
return 0;
}
