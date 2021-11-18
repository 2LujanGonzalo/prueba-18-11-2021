// implementar las funciones de libprueba.h
#include <stdio.h>
#include <stdlib.h>

//1 ez.c
void saludar(char *name){
  printf("Hola, %s\n",name );
}


//ejercicio 2
int potencia_de_dos(int n){
int z=1;
  for (int i = 0; i < n; i++) {
    z*=2;
  }
  return z;
}




//3 vectores.c
void suma_vectorial(int u[], int v[], int result[], int n){
u[n];
v[n];
result[n];
  for (int i = 0; i < n; i++) {
    result[i]=u[i]+v[i];
  }
}

void print_array(int a[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d ",a[i] );
  }
  printf("\n");
}




//4 cesar.c
void cifrar(char word[], int key){
  int length=0;
  while(word[length]!=0){
    length++;
  }

for (int i = 0; i < length; i++) {
  word[i]+=key;
  if (word[i] >= 123) {
    word[i]-26;
  }
}

int i=0;
while(i<length){
  printf("%c",word[i] );
  i++;
}
printf(" ");

}
