#include<stdio.h>

int main(int argc, char *argv[]){

	if(argc > 2){
		printf("Falta un argumento\n");
		return 0;
	}else if(argc == 2){
		FILE *pFCrear;
		unsigned char byte;
		pFCrear = fopen(argv[1],"a"); 
		fclose(pFCrear);
	
	}
	return 0;
}
