#include <stdio.h>
#include <stdlib.h>
#include "artemis.h"

void limpiar_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    int opcion = 0;
    double altitud_actual = 192000.0;
    
    ParametrosOrbitales orbita_actual = calcular_parametros_orbitales(M_TIERRA, R_TIERRA, altitud_actual, G_CONST);

    do {
        printf("\n======================================================\n");
        printf("   SIMULADOR MISION ARTEMIS - ORBITA TERRESTRE (LEO)  \n");
        printf("======================================================\n");
        printf("Altitud de trabajo actual: %.1f m (%.1f km)\n", altitud_actual, altitud_actual / 1000.0);
        printf("------------------------------------------------------\n");
        printf("1. Cambiar altitud de la orbita (m)\n");
        printf("2. Demostracion analitica y velocidad orbital\n");
        printf("3. Calcular periodo orbital en seg y min\n");
        printf("4. Calcular aceleracion centripeta\n");
        printf("5. Simular pulso de propulsor auxiliar lateral\n");
        printf("6. Ver reporte completo de la orbita actual\n");
        printf("0. Salir del simulador\n");
        printf("------------------------------------------------------\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &opcion) != 1) {
            printf("\n[Error] Entrada invalida. Por favor, ingrese un numero del menu.\n");
            limpiar_buffer();
            opcion = -1;
            continue;
        }
        limpiar_buffer();

        switch (opcion) {
            case 1: {
                double nueva_altitud;
                printf("\nIngrese la nueva altitud en metros (ej. 192000): ");
                if (scanf("%lf", &nueva_altitud) == 1 && nueva_altitud > 0) {
                    altitud_actual = nueva_altitud;
                    orbita_actual = calcular_parametros_orbitales(M_TIERRA, R_TIERRA, altitud_actual, G_CONST);
                    printf("[OK] Altitud y parametros orbitales actualizados.\n");
                } else {
                    printf("[Error] La altitud debe ser un numero positivo.\n");
                }
                limpiar_buffer();
                break;
            }

            case 2:
                printf("\n");
                imprimir_demostracion_analitica();
                printf("Velocidad orbital calculada (v): %.2f m/s (%.3f km/s)\n", 
                       orbita_actual.velocidad, orbita_actual.velocidad / 1000.0);
                break;

            case 3:
                mostrarPeriodoOrbital(altitud_actual);
                break;

            case 4:
                mostrar_aceleracion_centripeta(&orbita_actual);
                break;

            case 5:
                printf("\n--- Simulacion de Propulsor Lateral ---\n");
                mostrar_desviacion_lateral();
                break;

            case 6:
                printf("\n");
                mostrar_resultados(&orbita_actual);
                break;

            case 0:
                printf("\nCerrando telemetria de la nave Orion. ¡Hasta luego!\n");
                break;

            default:
                printf("\n[Advertencia] Opcion no reconocida. Elija entre 0 y 6.\n");
                break;
        }

    } while (opcion != 0);

    return 0;
}