// https://lechugato.blogspot.com/p/funciones-c.html
#include <stdio.h> // fgets
#include <stdlib.h> // malloc, free

//El * es indicativo de puntero, pero todavía no enseñaré sobre los punteros. Antes enseñaré los operadores en el siguiente capítulo.
char* dato_personas(){
  char* sData=malloc(350);// En el capítulo de "punteros y arrays" explicaré sus usos.
  
  puts("Ingresa los datos separados con comas(\",\"): Nombre, edad, sexo.\nLos caracteres que estén después de los 350 se ignorarán.");
  fgets(sData, 350, stdin);
  
  printf("0 - Dentro de la función \"dato_personas\" sData vale: %s. Y apunta a: %p.\n-------------------------------\n",sData,sData);
  return sData;
}
int main(int argc, char** argv){
  //Aquí data no es accesible y no se podrá usar. Ejemplo:
  //sData=NULL;// Error: Variable no se ha declarado. Elimina el "//" para que veas el error.
  char* sData;// Ahora si lo declaramos.
  char* sData_2;
  
  printf("1- Por ahora sData vale: %s, la dirección a que apunta es: %p.\n",sData,sData);// Tiene un valor, pero no es el mismo anterior
  
  sData_2=dato_personas();
  
  printf("2- Por ahora sData vale: %s. la dirección a que apunta es: %p.\n",sData,sData);// Sigue valiendo lo mismo.
  printf("3- sData_2 vale: %s. La dirección a que apunta es: %p\n.",sData_2,sData);
  
  sData=sData_2;
  
  printf("4- Ahora sData vale: %s. la dirección a que apunta es: %p.\n------------------------\n",sData);// Ahora vale lo mismo que sData_2
  printf("Los datos pasados son: %s.\n",sData);
  
  free(sData);// Liberamos la memoria usada en la cadena. Ya no puedes usar sData ni sData_2, así que lo ponemos en NULL (0):
  sData=NULL;
  sData_2=NULL;
  
  return 0;
}
