## Propósito y sentido de la actividad
En este tp se practican los comandos más usados del sistema GNU/Linux. Conocer y ganar práctica en estos comandos será útil a lo largo de la materia así como también en la vida profesional donde el uso de este sistema puede ser excluyente e indispensable. 
En este tp también se trabaja con el concepto de proceso y sus estados. Estos conceptos son la base para entender el funcionamiento de un sistema operativo y eventualmente mejorar su desempeño y performance. 

## Que es lo que tenemos?
- Un ejemplo de shell script Bash que nos permitirá avanzar sobre scripts más complejos. Podremos darle permisos y ejecutarlo.
- Tendremos ejemplos básicos de programas escritos en el lenguaje C, sabremos compilarlos y ejecutarlos dentro del sistema GNU/Linux.

## Software que se utilizó
Para realizar esta actividad fue necesario tener instalado un sistema GNU/Linux sobre una computadora con procesador de al menos dos núcleos.

# Enunciado del Mini TP

## Ejercicio 1: Shell y terminal

Realice un script de shell llamado `miniTP.sh` tal que realice las siguientes tareas:

- Al momento de ejecutarse, el programa debe recibir por parámetro en la línea de comandos un nombre y debe crear un directorio con dicho nombre en el home del usuario. 
  - Por ejemplo, la forma de ejecutarlo debe ser así: `./miniTP.sh pepito`
  - Para acceder al home puede ejecutar: `cd $HOME`
  - Si se ejecuta sin parámetros debe dar un mensaje de error, por ejemplo: 
    - `"Error: debe ejecutar con un parámetro al menos"`
  
- Dentro del directorio creado en el punto anterior debe crear un archivo llamado `contenido_home.txt`.

- Debe agregar al archivo anterior el listado de todos los archivos del home (incluidos los archivos ocultos si existe alguno) y, además de los nombres de los archivos, se tienen que ver los permisos de los mismos.

- Al final, el script `miniTP.sh` debe mostrar por pantalla el contenido del archivo `contenido_home.txt`, esperar a que el usuario apriete enter y después terminar.

## Ejercicio 2: Estados de un Proceso

En esta parte vamos a aplicar nuestros conocimientos de procesos y sus estados.

- Realizar un programa en C compuesto de instrucciones que realizan cálculos (operaciones aritméticas) y operaciones de I/O (leer un input del usuario).
- Compilar y ejecutar su programa y visualizar los estados por los que pasa. Puede usar la herramienta `htop`.
- Ejecutar su programa y comprobar mediante el programa `htop` que su programa efectivamente cambia de estados.

Ejemplo de una captura de `htop`:

_(Aquí va una captura de pantalla de `htop` si se desea incluir en el informe)_

## Ejercicio 3: Threads

El siguiente programa ejecuta la función `calculo_aritmetico()` cinco veces. Esta función realiza una operación aritmética que requiere cierto tiempo y continúa:

```
#include <stdio.h>  // Incluimos la librería de estándar input/output
#include <unistd.h> // Para hacer sleep
#include <time.h>   // Para inicializar el tiempo

void calculo_aritmetico(){
    int contador = 0;
    while(contador < 2147483647){
        contador = contador + 1;  
    }  
}

int main() {
    calculo_aritmetico(); 
    calculo_aritmetico(); 
    calculo_aritmetico(); 
    calculo_aritmetico(); 
    calculo_aritmetico(); 
    return 0;
}
```
Para compilar: gcc calculo_aritmetico.c -o ejecutable

Para ejecutar: ./ejecutable


Con la función time, medir el tiempo que tarda el programa anterior.

Modificar el programa anterior para que cada una de las 5 llamadas a la función calculo_aritmetico() sea un único hilo de ejecución.

Medir el tiempo que tarda su nuevo programa. ¿Qué diferencias observa en el tiempo? ¿Por qué es importante la cantidad de núcleos en el procesador?

Fin del Mini TP
