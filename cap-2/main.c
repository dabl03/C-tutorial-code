// Cap 2: Variables https://lechugato.blogspot.com/p/tutorial-c-cap-2.html
#include <stdio.h>  //Para poder usar la función printf y getchar que se usa para la IO/OUT

int main(void){
    //Variables enteras:
    int entero=100;// Entero de 32bits. Su valor puede ser de -2147483648 hasta 2147483647. Ni más, ni menos.
    short p_entero=300;// Un entero de 16bits. Puede almacenar −32767 hasta 32767
  
    //Variables con decimales:
    float decimales=2.4; // Su valor puede ser de -3.40282e+38 a 3.40282e+38
    double decimales_doble_precisión=10000.9023921839021; // Lo mismo que float, pero almacena con más precisión: -1.79769e+308 a 1.79769e+308
  
    //Carácter:
    char caracter='a'; // Pude almacenar un carácter. iNotar que lo encerramos en comillas simples, no puede ser de otra forma.
  
    //Caracteres o String en inglés:
    char* cadena_de_caracteres="Los string están diseñado para almacenar varios caracteres para formar palabras y oraciones";
  
    //	iNotar que usamos comillas dobles; y notar que es char pero con el signo (*) en otro capitulo lo explico!.
   
    //Mostramos sus valores por consola:
    printf("La variable entera vale: %d\n", entero);
    printf("Los decimales son: %f y %f\n", decimales,decimales_doble_precisión);
    printf("El carácter único es: %c\n", caracter);
    printf("El mensaje oculto es:\n    - %s\n", cadena_de_caracteres);
  
    puts("Se terminó el programa, presionar enter para terminar...");
    getchar();
    return 0;
}
