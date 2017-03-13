#include <stdio.h>
#include <stdlib.h>


char *copyn(char *s1, char *s2,int n){
	int i;
	for (i=0;i<n;i++){
		s2[i]=s1[i];
	}
	return s2;
}

void main(int argc, char *argv[]){
	char *cadena=argv[1];
	char *numero=argv [2];
	int n= atoi(numero);
	char *cad=(char *) malloc (n+1);
	copyn(cadena,cad,n);
	printf ("%s\n",cad);
}