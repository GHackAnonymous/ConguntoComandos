#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]){

	if(argc < 2){
		printf("Falta un argumento\n");
		return 0;
	}else if(argc == 2){
		if(mkdir(argv[1]) != 0){
			printf("Error, no he podido crear el directirio");
		}

		// para dar permisos drwxr-xr-x, esto permisos son 
		//por defecto
		char mode[] = "0755";
		
		int i = strtol(mode,0,8);
		chmod(argv[1],i);	
	}
	return 0;
}
