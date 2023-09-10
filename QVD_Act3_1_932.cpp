 #include <stdio.h>

    //Diego Demian Quiros Vicencio
    // 09/09/2023
    // Leer 4 calificaciones y desplegar la situacion del alumno


int main() {
    int calif1, calif2, calif3, calif4, promedio;

    printf("Ingresa tus 4 calificaciones: ");
    scanf("%d %d %d %d", &calif1, &calif2, &calif3, &calif4);

    promedio = (calif1 + calif2 + calif3 + calif4) / 4;

    if (promedio < 30) {
        printf("Repetirá");
    } else {
        if (promedio < 60) {
            printf("Extraordinario");
        } else {
            if (promedio < 70) {
                printf("Suficiente");
            } else {
                if (promedio < 80) {
                    printf("Regular");
                } else {
                    if (promedio < 90) {
                        printf("Bien!");
                    } else {
                        if (promedio < 98) {
                            printf("Muy bien!");
                        } else {
                            if (promedio < 100) {
                                printf("Excelente! Muy bien!");
                            } else {
                                printf("Error~");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
