// https://lechugato.blogspot.com/p/tutorial-c-cap-2.html
#include <stdio.h>

int main (void){
    long int big_int=-10000;// Un rango de −2147483647 a +2147483647
    long double PI=3.141593;// Es un double de 128 bits

    unsigned long int big_int_big=-100000000;// Entero sin signo, si lo inicializas con -100000000 la variable contendrá 100000000
    signed long int _big_int=-100000000;// Lo mismo que long int
    
    // Mostrar los valores de las variables:
    printf("La variable \"big_int\" se inicializó con -10000 y ahora contiene: %ld.\n",big_int);
    printf("El valor de \"PI\" es: %Lf.\n",PI);
    printf("La variable \"big_int_big\" se inicializó con -100000000 y ahora contiene: %lu.\n",big_int_big);
    printf("La variable \"_big_int\" se inicializó con -100000000 y ahora contiene: %ld.\n",_big_int);
    return 0;
}
