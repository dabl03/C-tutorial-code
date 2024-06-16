// https://lechugato.blogspot.com/p/funciones-c.html
#include <stdio.h>

// Prototipos de función (los veremos más a delante):
void msg();
void line_break();

/*Esta es la estructura de una función que retorna algo y tiene parámetros:
  tipo_de_dato_de_retorno nombre_de_funcion(tipo_de_paratmetro param1,int param2,...){
    return tipo_de_dato_de_retorno;// Retornamos el dato que queremos retornar
  }
*/
int main(int argc, char** argv){
  // Mostramos el mensaje de bienvenida.
  msg();
  line_break();

  printf("La cantidad de parámetros que se pasó a la función main es: %d.\n",argc);
  printf("La ubicación del programa es: %s.\n",argv[0]);

  line_break();
  puts("Si quieres escribe algo y después presione enter para terminar");

  const char key_firts=getchar();// Obtenemos un carácter de lo que escribiste en la consola.
  line_break();
  printf("El primer carácter que escribiste es: %c\nTu programa ha terminado...\n",key_firts);

  return 0;// Retornamos 0. Ahora quien llama a la función main podrá hacer: int valor_main=main();
}
// Función que no retorna nada y no tiene parámetros:
void msg(){
  puts("----------------------------------");
  puts("             Tutorial C           ");
  puts("         Cap 3 - FUNCIONES        ");
  puts("----------------------------------");
  puts(" - Ejemplo 1.");
}
void line_break(){
  puts("\n\n");// 3 saltos de líneas. (Recuerda que puts agrega un salto de línea al final).
}
