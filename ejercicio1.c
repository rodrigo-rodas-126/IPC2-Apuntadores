#include <stdio.h>

//Referenciacion - Es la obtencion de la direccion de una variable

int main() {
    int dir_var = 15;
    printf("la direccion de dir_var es: %p \n", &dir_var);
    return 0;
}