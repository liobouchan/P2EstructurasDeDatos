#include <stdio.h>//Libreria Principal
#include <stdlib.h>
#include <string.h>

//Apartado para la declaración y creación de Structs
typedef struct Producto{ 
  int id;
  char nombre[20];
  char descripcion[100];
  int cantidad;
  int flag; 
}Producto;

  //Asignación de valores
  int longitud = 10;

//Apartado donde se encuentran las funciones que utilizaremos en el programa

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

//Funcion que muestra toda la lista completa de productos
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

//Funcion para escribir en el archivo txt
void escribir(Producto* p){ 
  FILE *pf;
  int i = 0;
  pf=fopen("archivo.txt", "w");
  if(pf!=NULL){ //Acciones int i=0;
    while(i<longitud){
      if(p[i].flag==1){
        fprintf(pf,"%d\n",p[i].id);
        fputs(p[i].nombre,pf);
        fprintf(pf,"\n");
        fputs(p[i].descripcion,pf);
        fprintf(pf,"\n");
        fprintf(pf,"%d\n",p[i].cantidad);
        fprintf(pf,"%d\n",p[i].flag);
        i++;
      }
    }
  }else{
    //Mensaje de error fclose(pf);
  }
  fclose(pf);
}

//Funcion para el llenado de Archivos
void llenar(){
  int i;
  Producto productos[longitud];

  for(i=0; i<=5; i++){
    productos[i].id = 0 + i;
    strcpy(productos[i].nombre,"Juego");
    strcpy(productos[i].descripcion,"Descripcion");
    productos[i].cantidad = i ;
    productos[i].flag = 1;
    i++;
  }
}

int main() {

  //Declaración de variables que vamos a usar.
  int puesto,opcion,c,i,longitud;
  Producto productos[longitud],*p;

  //Llamando al Mensaje Principal y guardando respuesta de usuario
  bienvenida();
  scanf("%d" , &puesto);

  //Con este if sabremos que menú mostrar
  if(puesto == 1){
    system("clear");
    printf("%s\n", "Hola Administrador espero esté teniendo un lindo dia. :)");
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
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
    }
  }

  if(puesto == 2){
    system("clear");
    printf("%s\n", "Hola espero que tengas suerte en tus ventas. :D" );
    printf("%s\n", "(1) Mostrar Lista de Productos" );
    printf("%s\n", "(2) Mostrar Producto" );
    printf("%s\n", "(3) Vender Producto" );
    printf("%s\n", "(4) Salir" );

    //Switch que nos mandará a las funciones depende de lo seleccionado por usr
    switch(opcion){
      case 1:
        mostrarListaProductos(c);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
    }
  }
}
