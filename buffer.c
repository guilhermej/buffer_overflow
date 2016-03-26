#include <stdio.h>

main(){
	char buffer[8];
	int zero = 0;

	gets(buffer);
	puts(buffer);
	
	if(zero == 0){
		printf("Zero continua sendo zero");
	}else{
		printf("A variavel zero foi modificada");
	}


	return 0;
}