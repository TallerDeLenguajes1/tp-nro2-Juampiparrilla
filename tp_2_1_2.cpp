#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 5

int main(){
	int f,c;
	srand(time(NULL));
	double matriz[N][M];
	double *puntero;
		
	puntero= &matriz[0][0];
	puntero =(double*)malloc(N*M*sizeof(double));
	
	for(f=0; f<N; f++){
		for(c=0; c<M; c++){
			*(puntero +( f*M +c )) = rand()%(30-1+1)+1 ;
			printf("%5.lf  ",*(puntero +( f*M +c)));
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
