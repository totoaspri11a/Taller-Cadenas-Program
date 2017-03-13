#include <stdio.h>
#include <stdlib.h>

int len(char *sj){
	int i;
	int n=0;
	for(i=0;sj[i]!='\0';i++){
		n++;
	}
	return n;
}

int main (int argc, char *argv[]){
	char *CadenaEntrada=argv[1];
	int n=len(CadenaEntrada);
	printf ("%d\n",n);

}