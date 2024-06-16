// https://lechugato.blogspot.com/p/funciones-c.html
#include <stdio.h>

const char* sAUTHOR="dabl03";
const char* sNAME="lechugato";
int iCoord_x=0,iCoord_y=0;

//Regresamos a las funciones prototipos:D
void move_up(int y);
void move_down(int y);
void move_left(int x);
void move_right(int x);

void view_coord(){printf("Las coordenadas son: x: %d, y: %d.\n",iCoord_x,iCoord_y);}
int main(){
  puts("Variables globales.");
  printf("Programa hecho por %s\n", sAUTHOR);
  printf("En esta sección veremos el uso de variables globales.\n");
  printf("Coordenadas iniciales del jugador %s son (%d-%d).\n",sAUTHOR,iCoord_x,iCoord_y);
  
  move_up(30);
  move_left(10);
  move_right(4);
  move_down(20);
  move_up(10);
  move_left(40);
  
  view_coord();
  return 0;
}
void move_up(int y){
  iCoord_y+=y;// Después enseñare que son += o -=
}
void move_down(int y){
  iCoord_y-=y;
}
void move_left(int x){
  iCoord_x-=x;
}
void move_right(int x){
  iCoord_x+=x;
}
