#include <stdio.h>
#include <stdlib.h>
	FILE *archivo;
	char lectura;
	void crear_archivo();
int main(){
    
    printf("Ingresa el contenido del archivo:\n");
    crear_archivo();

	return 0;
}
void crear_archivo(){
	
	archivo = fopen("archivo_generado.txt","w+");
	if(archivo==NULL){
		printf("Error al crear el archivo");
	}
	while((lectura=getchar())!='\n'){
		fputc(lectura,archivo);
	}
	
	fclose(archivo);
}
