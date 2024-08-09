#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Programa que ejecuta un ciclo for "n" veces
	El valor se pasa como parámetro en la línea de comando
	argv[0] es el nombre del programa
	argv[1] es el número de iteraciones
*/

int main(int argc, char* argv[]){
	if(argc!=2){
		printf("Forma de uso: %s ValorLong \n", argv[0]);
		return -1;	
	}
	
	long max = atol(argv[1]);

	//Calcula el tiempo de ejecución
	clock_t t = clock();
	printf("Inicio\n");
	
	//Realiza las "n" iteraciones
	register int n=0;
	for(n=0; n<max; n++);

	printf("Fin\n");
	t=clock() - t;
	double tiempo = ((double)t)/CLOCKS_PER_SEC; //Calcula el tiempo transcurrido
	printf("Tiempo transcurrido: %f segundos\n", tiempo);
	return 0;
}

