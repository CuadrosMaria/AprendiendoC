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
    return 0;
}