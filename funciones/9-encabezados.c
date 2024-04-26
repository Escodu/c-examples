#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v;
    int s;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    s = funcion4(10)

    // Imprime el valor que retornó funcion3()
    printf("En la función3 \nv = %d\n", v);
    printf("En la función4 \nv = %d\n", s);


    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    int y = x + 2;
    return y;
}

int funcion4(int x) {
    int y = x + 2;
    return y;
}
