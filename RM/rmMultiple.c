#include<stdio.h>

int main(int argc, char *argv[]){

	if(argc < 2){
		printf("Falta un argumento\n");
		return 0;
	}else if(argc > 2){
		
		for(int i = 1;i <= argc;i++){
			remove(argv[i]);	
		}
	
	}
	return 0;
}
