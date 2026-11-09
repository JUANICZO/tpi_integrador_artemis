/* nemi



*/

/* fran



*/

/* tomi



*/

/* juan cruz */
#include <stdio.h>
#include <math.h>
#include "orion_orbit.h"

void imprimir_demostracion_analitica(void);
ParametrosOrbitales calcular_parametros_orbitales(double m_tierra, double r_tierra, double altitud, double g_grav);
void mostrar_resultados(const ParametrosOrbitales *orbita);

void imprimir_demostracion_analitica(void) {
    printf("=== 1. DEMOSTRACIÓN ANALÍTICA ===\n");
    printf("Fuerza gravitatoria (Fg) = G * (M_T * m_orion) / r²\n");
    printf("Fuerza centrípeta (Fc)   = m_orion * v² / r\n\n");
    printf("Igualando Fg = Fc:\n");
    printf("  G * (M_T * m_orion) / r² = m_orion * v² / r\n\n");
    printf("Cancelando la masa m_orion y simplificando el radio r:\n");
    printf("  v² = (G * M_T) / r\n");
    printf("  v  = sqrt((G * M_T) / r)\n\n");
}

ParametrosOrbitales calcular_parametros_orbitales(double m_tierra, double r_tierra, double altitud, double g_grav) {
    ParametrosOrbitales orbita;
    orbita.r_total = r_tierra + altitud;
    double mu = g_grav * m_tierra;
    orbita.velocidad = sqrt(mu / orbita.r_total);
    orbita.aceleracion = (orbita.velocidad * orbita.velocidad) / orbita.r_total;
    orbita.periodo = (2.0 * M_PI * orbita.r_total) / orbita.velocidad;
    return orbita;
}

void mostrar_resultados(const ParametrosOrbitales *orbita) {
    printf("=== 2. CÁLCULO NUMÉRICO ===\n");
    printf("Radio orbital r:       %.1f m (%.1f km)\n", orbita->r_total, orbita->r_total / 1000.0);
    printf("Velocidad orbital v:   %.2f m/s (%.3f km/s)\n", orbita->velocidad, orbita->velocidad / 1000.0);
    printf("Aceleración centrípeta: %.4f m/s²\n", orbita->aceleracion);
    
    int minutos = (int)(orbita->periodo / 60.0);
    double segundos = orbita->periodo - (minutos * 60.0);
    printf("Período orbital T:     %.2f s (%d min %.2f s)\n", orbita->periodo, minutos, segundos);
}