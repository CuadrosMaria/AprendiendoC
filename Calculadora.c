#include <stdio.h>
#include <math.h>
void numeros (float *a, float*b){
    printf("Ingrese el primer numero:");
    scanf("%f",a);
    printf("Ingrese el segundo numero:");
    scanf("%f",b);
}
void Reordenar(float *a, float*b){
    float aux;
    if (*a<*b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}
int main() {
    float a, b;
    int op;
    menu:
    printf("------------------Menu------------------\n");
    printf(" 1. Sumar\n 2. Restar\n 3. Multiplicar\n 4. Dividir\n 5. Potencia\n 6. Residuo");
    printf(" \n 7. Mayor, igual o menor\n 8. Imprimir numeros\n 9. Salir \n");
    scanf("%d",&op);
    switch (op){
        case 1:
            numeros(&a, &b);
            printf("La suma entre %.2f y %.2f es de: %.2f \n",a,b,a+b);
            goto menu;
        case 2:
            numeros(&a, &b);
            Reordenar(&a, &b);
            printf("La resta entre %.2f y %.2f es de: %.2f \n",a,b,a-b);
            goto menu;
        case 3:
            numeros(&a, &b);
            printf("La multiplicación entre %.2f y %.2f es de: %.2f \n",a,b,a*b);
            goto menu;
        case 4:
            numeros(&a, &b);
            printf("La división entre %.2f y %.2f es de: %.2f \n",a,b,a/b);
            goto menu;
        case 5:
            numeros(&a, &b);
            printf("La potencia %.2f de %.2f es de: %.2f \n",b,a,pow(a,b));
            goto menu;
        case 6:
            numeros(&a, &b);
            printf("El residuo entre %.2f y %.2f es de: %.2f \n",a,b,fmod(a,b));
            goto menu;
        case 7:
            numeros(&a, &b);
            if (a>b){
                printf("%.2f es mayor que %.2f \n",a,b);
            } else if (a<b){
                printf("%.2f es menor que %.2f \n",a,b);
            } else {
                printf("%.2f es igual a %.2f \n",a,b);
            }
            goto menu;
    }
    
    return 0;
}