#ifndef ARTEMIS_H
#define ARTEMIS_H

/*definimos las constantes fisicas a utilizar*/
#define G_CONST   6.674e-11
#define M_TIERRA  5.972e24
#define R_TIERRA  6371000.0
#define G_TIERRA     9.80
#define ALTITUD_H   192000.0
#define M_ORION     33000.0

/* Estructura para almacenar los parámetros orbitales */
typedef struct {
    double r_total;
    double velocidad;
    double aceleracion;
    double periodo;
} ParametrosOrbitales;
