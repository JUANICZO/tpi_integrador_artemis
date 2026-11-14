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
<<<<<<<<< Temporary merge branch 1
=========

/* juan cruz - punto a*/
void imprimir_demostracion_analitica(void);
ParametrosOrbitales calcular_parametros_orbitales(double m_tierra, double r_tierra, double altitud, double g_grav);
void mostrar_resultados(const ParametrosOrbitales *orbita);

/* nemi - punto c */
double calcular_aceleracion_centripeta(const ParametrosOrbitales *orbita);
void mostrar_aceleracion_centripeta(const ParametrosOrbitales *orbita);

#endif
>>>>>>>>> Temporary merge branch 2
