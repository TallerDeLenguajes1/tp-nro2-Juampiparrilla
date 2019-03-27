#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 5

int main(){
 int f,c;
 srand(time(NULL));
 double mt[N][M];
 
// NUMERO ALEATORIO => N = rand() % (Lsup – Linf + 1) + Linf
 
 for(f=0; f<N; f++){
	 for(c=0; c<M; c++){
		 mt[f][c]= rand()%(30-1+1)+1 ;
		 printf("%2.lf  ",mt[f][c]);
	 }
	 printf("\n");
 }
	
	
	return 0;

}
