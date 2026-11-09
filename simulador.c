/* nemi



*/

/* fran



*/

/* tomi */

void calcularPeriodoOrbital(double altitud, double *periodo){
    double r, v;
    if (periodo == NULL || altitud <= 0.0) {
        return 0;
    }
    r = R_TIERRA + altitud;                  
    v = sqrt(G_CONST * M_TIERRA / r);        
        return 0;
    }
    *periodo = 2.0 * PI * r / v;            
    return 1;
}
void mostrarPeriodoOrbital(double altitud){
    double T;
    if (!calcularPeriodoOrbital(altitud, &T)) {
        printf("Error: no se pudo calcular el periodo orbital.\n");
        return;
    }
    printf("\n--- Periodo orbital ---\n");
    printf("Periodo T = %.2f s\n", T);
    printf("Periodo T = %.2f min\n", T / 60.0);
}



/* rama



*/