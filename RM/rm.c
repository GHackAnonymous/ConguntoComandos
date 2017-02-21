#include<stdio.h>

int main(int argc, char *argv[]){

	if(argc != 2){
		printf("Falta un argumento\n");
		return 0;
	}else if(argc == 2){

		remove(argv[1]);	
	
	}
	return 0;
}
