#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "validaciones.h"

#define TAM_BUFFER 64

static int leer_linea(char *buffer, int tam)
{
    if (fgets(buffer, tam, stdin) == NULL) {
        return 0;
    }
    if (strchr(buffer, '\n') == NULL) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) { }
    }
    return 1;
}

int leer_entero_en_rango(const char *mensaje, int min, int max)
{
    char buffer[TAM_BUFFER];
    char *fin;
    long valor;

    while (1) {
        printf("%s", mensaje);

        if (!leer_linea(buffer, TAM_BUFFER)) {
            printf("\nFin de entrada. Saliendo del programa.\n");
            exit(1);
        }

        valor = strtol(buffer, &fin, 10);

        if (fin == buffer) {
            mostrar_error("Debe ingresar un numero entero.");
        } else if (*fin != '\n' && *fin != '\0') {
            mostrar_error("Hay caracteres no validos despues del numero.");
        } else if (valor < min || valor > max) {
            printf("[ERROR] El valor debe estar entre %d y %d.\n", min, max);
        } else {
            return (int)valor;
        }
    }
}

double leer_double_en_rango(const char *mensaje, double min, double max)
{
    char buffer[TAM_BUFFER];
    char *fin;
    double valor;

    while (1) {
        printf("%s", mensaje);

        if (!leer_linea(buffer, TAM_BUFFER)) {
            printf("\nFin de entrada. Saliendo del programa.\n");
            exit(1);
        }

        valor = strtod(buffer, &fin);

        if (fin == buffer) {
            mostrar_error("Debe ingresar un numero (use punto decimal).");
        } else if (*fin != '\n' && *fin != '\0') {
            mostrar_error("Hay caracteres no validos despues del numero.");
        } else if (!isfinite(valor)) {
            mostrar_error("El valor ingresado no es un numero valido.");
        } else if (valor < min || valor > max) {
            printf("[ERROR] El valor debe estar entre %.1f y %.1f.\n", min, max);
        } else {
            return valor;
        }
    }
}

char leer_caracter_opcion(const char *mensaje, const char *validos)
{
    char buffer[TAM_BUFFER];
    char c;

    while (1) {
        printf("%s", mensaje);

        if (!leer_linea(buffer, TAM_BUFFER)) {
            printf("\nFin de entrada. Saliendo del programa.\n");
            exit(1);
        }

        if (buffer[0] != '\n' && (buffer[1] == '\n' || buffer[1] == '\0')) {
            c = (char)toupper((unsigned char)buffer[0]);
            if (strchr(validos, c) != NULL) {
                return c;
            }
        }
        printf("[ERROR] Opcion invalida. Opciones validas: %s\n", validos);
    }
}

void mostrar_error(const char *texto)
{
    printf("[ERROR] %s\n", texto);
}

void mostrar_aviso(const char *texto)
{
    printf("[AVISO] %s\n", texto);
}

void mostrar_titulo(const char *texto)
{
    printf("\n========================================\n");
    printf("  %s\n", texto);
    printf("========================================\n");
}

void pausar(void)
{
    char buffer[TAM_BUFFER];

    printf("\nPresione ENTER para continuar...");
    leer_linea(buffer, TAM_BUFFER);
}
