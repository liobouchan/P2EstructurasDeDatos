#include <stdio.h>//Libreria Principal
#include <stdlib.h>
#include <string.h>

int main() {

  //Declaración de variables que vamos a usar.
  int puesto,opcion,c;

  //Llamando al Mensaje Principal y guardando respuesta de usuario
  bienvenida();
  scanf("%d" , &puesto);

  //Con este if sabremos que menú mostrar
  if(puesto == 1){
    printf("%s\n", "(1) Mostrar Lista de Productos" );
    printf("%s\n", "(2) Mostrar Productos" );
    printf("%s\n", "(3) Modificar Productos" );
    printf("%s\n", "(4) Actualizar Productos" );
    printf("%s\n", "(5) Eliminar Producto" );
    printf("%s\n", "(6) Salir");
    scanf("%d" , &opcion);
    //Switch que nos mandará a las funciones depende de lo seleccionado por usr
    switch(opcion){
      case 1:
        mostrarListaProductos(c);
        break;
/*      case 2:
      case 3:
      case 4:
      case 5:
      case 6:*/
    }
  }

  if(puesto == 2){
    printf("%s\n", "(1) Mostrar Lista de Productos" );
    printf("%s\n", "(2) Mostrar Producto" );
    printf("%s\n", "(3) Vender Producto" );
    printf("%s\n", "(4) Salir" );
  }
}

//Función que nos da el mensaje principal
void bienvenida(){
  //Imprimiendo mensajes de Bienvenida al usuario.
  system("clear");
  printf("%s\n", "Hola bienvenido" );
  printf("%s\n", "Indicanos tu puesto");
  printf("%s\n", " ");
  printf("%s\n", " ");
  printf("%s\n", "(1) Administrador");
  printf("%s\n", "(2) Vendedor");
}

void mostrarListaProductos(int c){

  FILE *lista;
  lista = fopen("archivo.txt","r");

  //Si el archivo no está vacio entra a imprimir de lo contrario mandará error
  if(lista != NULL){
    printf("%s\n", "---------------------MOSTRANDO LISTA DE PRODUCTOS--------------------");
    while((c=fgetc(lista))!=EOF){
      putchar(c);
    }
  }else{
    printf("%s\n", "ERROR");
    bienvenida();
  }
  fclose(lista); //Cerramos el archivo para que no existan problemas.
}
