#include <stdio.h>
void numeros (float *a, float*b){
    printf("Ingrese el primer numero:");
    scanf("%f",a);
    printf("Ingrese el segundo numero:");
    scanf("%f",b);
}
void Reordenar(float *a, float*b){
    float aux;
    if (*a>*b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
int main() {
    float a, b;
    int op;
    printf("------------------Menu------------------\n");
    printf(" 1. Sumar\n 2. Restar\n 3. Multiplicar\n 4. Dividir\n 5.Potencia\n 6.Residuo");
    printf(" \n 7. Mayor, igual o menor\n 8. Imprimir numeros\n 9. Salir \n");
    scanf("%d",&op);
    return 0;
}