// https://lechugato.blogspot.com/p/tutorial-c-cap-2.html
#include <stdio.h>

int main(){
    const double PI=3.1415;//...
    int diametro=30;// cm
    //PI=0;// Esto dará error, quítalo para que compile el programa.
    double circunferencia=PI*diametro;
    
    //Imprimimos la circunferencia:
    printf("De una pizza con %dcm de diámetro su circunferencia será %lf.\n",diametro,circunferencia);
    puts("Press enter for exit program...");
    getchar();
    return 0;
}
