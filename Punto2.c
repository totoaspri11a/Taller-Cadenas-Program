#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int num, cont, I[100], numMagico, numMagicoDos, sum, res, multi;

int mag(int intentos,int *historia){
	srand(time(NULL));
	numMagico =rand()%100;
	numMagicoDos = rand()%100;
	cont = 0;
	int i,c,g=-1;
	int o = 0;

	while(numMagico == numMagicoDos){
		numMagicoDos = rand()%100;
	}
	
	//printf("%d %d",numMagico,numMagicoDos);
	sum = numMagico+numMagicoDos;
	res = numMagico-numMagicoDos;
	multi = numMagico*numMagicoDos;

	do {
		printf("\nDigite un número:\n");
		scanf("%d",&num);
		I[o]=num;
		o++;
		if (num != numMagico && num != numMagicoDos){ 
			printf("Ese no es el número.\n");
			printf("\nEstá entre los números del 0 al 100\n");
		}
		if(num > numMagico){
			printf("\nEl número correcto 1 es menor que %d %s",num,"\n");
		}else if(num < numMagico) {
			printf("\nEl número correcto 1 es mayor que %d %s",num,"\n");
		}
		if(num > numMagicoDos){
			printf("\nEl número correcto 2 es menor que %d %s",num,"\n");
		}else if(num < numMagicoDos) {
			printf("\nEl número correcto 2 es mayor que %d %s",num,"\n");
		cont+=1;
		}if(intentos==cont){
			printf ("Tenia maximo %d %s",intentos,"intentos \n");
			printf ("Vuelva a intertalo en otra ocasión");
			break;
		}
		
	}while (num != numMagico && num != numMagicoDos && num!= sum && num != res && num != multi );

	
	if(num == numMagico || num == numMagicoDos || num == sum || num == res || num == multi){
		printf("\nAcertaste en uno de ellos.\n");
		if (num == sum){
			printf("\nEs la suma de los 2 números mágicos.\n");
		}else if (num == res){
			printf("\nEs la diferencia entre los 2 números mágicos.\n");
		}else if(num == multi){
			printf("\nEs el cociente entre los 2 números mágicos.\n");
		}
	}
	printf("\nLos números usados fueron: \n");
	
	for(c=0;c<=100;c++){
		if(I[c]==0){
			break;
		}
		printf("-> %d %s",I[c],"\n");
			}
	if (cont<intentos){
		printf("Le tomó %d %s",cont,"intento(s)\n");
	}else{
		return g;
	}
	
}

int hist [100];
void main (){
	int i,nIntentos;
	nIntentos=mag(2,hist);
	if (nIntentos<0){
		for (i=0;i<nIntentos;i++){
			printf ("%d",hist [i]);
		}
	}
}