/* nemi



*/

/* fran
double calcular_desviacion_lateral(double acel, double tiempo) {
    double resultado = 0.0;

    if (acel > 0 && tiempo > 0) {
        resultado = (0.5 * acel) * (tiempo * tiempo);
    }
    return resultado;
} 
void mostrar_desviacion_lateral(void) {
    double acel = 0.50;
    double dt = 10.0;
    double resultado = 0.0;

    if (dt > 0) {
        resultado = calcular_desviacion_lateral(acel, dt);
        printf("Desviacion lateral instantanea d = %.2f m\n", resultado);
    } else {
        printf("Error: el tiempo debe ser mayor a cero\n");
    }
}




/* tomi



*/

/* rama



*/