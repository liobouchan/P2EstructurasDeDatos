#include <stdio.h>
#include <curses.h>

int main() {
  //Declaración de variables que vamos a usar.
  char *puesto;

  //Usando memoria dinámica.
  puesto=(char*)malloc(20*sizeof(char));

  //Imprimiendo mensajes de Bienvenida al usuario.
  printf("%s\n", "Hola bienvenido" );
  printf("%s\n", "Indicanos tu puesto");
  printf("%s\n", " ");
  printf("%s\n", " ");
  printf("%s\n", "(A) Administrador");
  printf("%s\n", "(V) Vendedor");
  gets(puesto);

  //Con este if sabremos que menú mostrar
  if(puesto == A){
    printf("%s\n", "TU puesto es A" );
  }else{
    printf("%s\n", "Tu puesto es B" );
  }
}