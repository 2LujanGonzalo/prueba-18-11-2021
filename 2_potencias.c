// escribir un programa que llame 4 veces a la funcion
// potencia_de_dos de libprueba.h para imprimir cuatro
// potencias de dos correspondientes a los numeros a, b, c y d
// ingresados como argumentos
// ejemplo: ./a.out 0 1 2 3 imprime 1 2 4 8
#include <stdio.h>
#include <stdlib.h>
#include "libprueba.h"
int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int c=atoi(argv[3]);
  int d=atoi(argv[4]);

  printf("%d %d %d %d\n",potencia_de_dos(a),potencia_de_dos(b),potencia_de_dos(c),potencia_de_dos(d) );
  return 0;
}
