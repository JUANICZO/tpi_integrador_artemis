#ifndef VALIDACIONES_H
#define VALIDACIONES_H

/* Lectura segura: repiten la pregunta hasta que el dato sea valido */
int    leer_entero_en_rango(const char *mensaje, int min, int max);
double leer_double_en_rango(const char *mensaje, double min, double max);
char   leer_caracter_opcion(const char *mensaje, const char *validos);

/* Mensajes de interfaz */
void   mostrar_error(const char *texto);
void   mostrar_aviso(const char *texto);
void   mostrar_titulo(const char *texto);
void   pausar(void);

#endif
