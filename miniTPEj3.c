#include <stdio.h>  //incluimos la libreria de estandar input/output
#include <unistd.h> //para hacer sleep
#include <time.h>   //para inicializar el tiempo

void calculo_aritmetico(){
    int contador=0;
    while(contador < 2147483647){
  	contador=contador+1;  
    }  
}

int main() {

time_t inicio, fin;
double tiempo_total;

  inicio = time(NULL);

  calculo_aritmetico(); 
  calculo_aritmetico(); 
  calculo_aritmetico(); 
  calculo_aritmetico(); 
  calculo_aritmetico(); 

fin = time(NULL);

tiempo_total = difftime(fin, inicio);

  printf("El programa tardó %.2f segundos en ejecutarse. \n", tiempo_total);

  return 0;
}

//para compilar: gcc calculo_aritmetico.c -o ejecutable
//para ejecutar: ./ejecutable
