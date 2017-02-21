#include<stdio.h>

int main(int argc, char *argv[]){

	if(argc < 2 ){
		printf("Falta un argumento\n");
		return 0;
	}else if(argc == 2){
		FILE *pFOrigen;
		char byte;
		pFOrigen = fopen(argv[1],"r"); 
		while(fread(&byte,sizeof(char),1,pFOrigen)){
			printf("%c",byte);
		}
		fclose(pFOrigen);
	}
	return 0;
}
