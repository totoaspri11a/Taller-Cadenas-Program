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

int copy(char *s1, char *s2){
	int i;
	for (i=0;i<len(s1);i++){
		s2[i]=s1[i];
	}
	return *s2;
}


void mostrar(char *s){
	int i;
	int n = len(s);
	for (i=0;i<len(s);i++){
		printf("%c",s[i]);
	}
}
int copyn(char *s1, char *s2,int n){
	int i;
	for (i=0;i<n;i++){
		s2[i]=s1[i];
	}
	return *s2;
}
int copynm(char *s1, char *s2,int n,int m){
	int i;
	for (i=n-1;i<m;i++){
		s2[i-n+1]=s1[i];
	}
	return *s2;
}
int compara(char *s1, char *s2){
	int i;
	for(i=0;i<len(s1);i++){
		if(s1[i]<s2[i]){
			printf("La cadena 1 es:\t");
			return'<';
			printf ("\n");

		}else{
			if(s1[i]>s2[i]){
			printf("La cadena 1 es:\t");
			return'>';
			printf ("\n");
			}
		}
	}
	printf("La cadena 1 es:\t");
	return'=';
	printf ("\n");
}

char *concatenar(char *s1, char *s2, char *s3){
	int i,j=0;
	for (i=0;i<len(s1);i++){
		s3[i]=s1[i];
	}
	for (i=len(s1);i<(len(s1)+len(s2));i++,j++){
		s3[i]=s2[j];
	}
	return s3;
}


char *asignarcadena (char *s1, char a,char s2[]){
	int x;
	for (x=0;x<len(s1);x++){
		s2[x]=a;
	}
	return s2;
}

char *haciaMayusculas (char *s1,char *s2){
	int x;
	for (x=0;x<len(s1);x++){
		s2[x] = s1[x] - 32;
	}
	s2 [x] = '\0';
	return s2;
}

char existecaracter (char *s1, char y){
	int x;
	for (x=0;x<len(s1);x++){
		if (s1[x]==y){
			return 'V';
		}
	}
	return 'F';
}

int posIniCaracter(char *s1,char y){
	int x,pos,k=-1;
	for (x=0;x<len(s1);x++){
		if (s1[x]==y){
			pos=x;
			//printf ("Está en la posición:\t");
			return pos;
			break;
		}
	}
	return k;
}

int posFinCaracter(char *s1, char y){
	int x,pos,k=-1;
	for (x=len(s1);x<len(s1);x--){
		if (s1[x]==y){
			pos=x;
			//printf ("Está en la posición:\t");
			return pos;
			break;	

		}
	}
	return k;
}

void main (){
	// Ejecución programa LongCadena:
	char *s="Hola mundo";
	int a=len(s);
	printf ("Ejecución programa LongCadena, la logitud es:\t");
	printf ("%d\n",a);
	//Ejecución programa posIniCarcater:
	char *s1="Hola mundo";
	char y='a';
	int x=posIniCaracter(s1,y);
	printf ("Ejecución programa posIniCarcater, Posición:\t");
	printf ("%d\n",x);
	//Ejecución programa posFinCarcater:
	char *s2="Hola Gabriela";
	char z='a';
	int f=posFinCaracter(s2,z);
	printf ("Ejecución programa posFinCarcater, Posición:\t");
	printf ("%d\n",f);
	//Ejecución programa haciaMayusculas:
	char *s3="aaaa";
	char *s4=(char*) malloc (len(s3)+1);
	char *h= haciaMayusculas(s3,s4);
	printf ("Ejecución programa haciaMayusculas, la cadena  en mayusculas es: \t");
	printf("%s\n",h);
	//Ejecucion existe carcater:
	char *s5="aaaa";
	char letra='x';
	char o=existecaracter(s5,letra);
	printf ("Ejecución programa existecaracter, si existe es 'V', de lo contrario es 'F':\t");
	printf("%c\n",o); 
}
