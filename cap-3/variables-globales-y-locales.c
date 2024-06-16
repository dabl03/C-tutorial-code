// https://lechugato.blogspot.com/p/funciones-c.html
#include <stdio.h>
char* sName_function="(No definida NULL).";

//Otra vez prototipos:D
const char* arepa();
const char* filete();
const char* gato();
int main(){
  printf("La función se llama: %s.\n",sName_function);
  printf("La función se llama: %s.\n",arepa());
  printf("La función se llama: %s.\n",filete());
  printf("La función se llama: %s.\n",gato());
  printf("La función se llama: %s.\n",sName_function);
  return 0;
}
const char* arepa(){
  const char* sName_function="arepa";// Esta cadena nunca se liberará, esto porque es parte del programa y su dirección de memoria no es parte de la pila.
  puts("Yummyng");
  return sName_function;
}
const char* filete(){
  const char* sName_function="filete";
  puts("Yummyng");
  return sName_function;
}
const char* gato(){
  char sName_function[]="gato";// Al ser un array, cuando termine la función esta variable morirá, así que no confíes en esto. iDE HECHO NO LO HAGAS!. Me acuerdo que una vez, pase un buen rato buscando un error referente a retornar una variable local tipo cadena ;).
  puts("Nop, no quiero.");
  sName_function[0]='P';// Los arrays se modifican indice por indice. Pero en un capitulo futuro lo enseñaré.
  return sName_function;// warning: function returns address of local variable [-Wreturn-local-addr] return sName_function;
}
