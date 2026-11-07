#ifndef ARTEMIS_H
#define ARTEMIS_H

/*definimos las constantes fisicas a utilizar*/
#define G_CONST   6.674e-11
#define M_TIERRA  5.972e24
#define R_TIERRA  6371000.0
#define G_TIERRA     9.80

/* nemi - punto c */
void calcularAceleracionCentripeta(double altitud, double *ac);
void mostrarAceleracionCentripeta(double altitud); 

#endif
