#include <stdio.h>//Libreria Principal
#include <stdlib.h>
#include <string.h>

int main() {
  //Declaración de variables que vamos a usar.
  int puesto,opcion;

  //Llamando al Mensaje Principal
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
