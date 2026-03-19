#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;
    
    // Tipos de cambio (Valores de referencia)
    float usd_a_gtq = 7.80;
    float eur_a_gtq = 8.50;
    float eur_a_usd = 1.09;

    printf("--- CONVERSOR DE MONEDAS ---\n");
    printf("1. Quetzales (GTQ) a Dólares (USD)\n");
    printf("2. Dólares (USD) a Quetzales (GTQ)\n");
    printf("3. Quetzales (GTQ) a Euros (EUR)\n");
    printf("4. Euros (EUR) a Quetzales (GTQ)\n");
    printf("5. Dólares (USD) a Euros (EUR)\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad / usd_a_gtq;
            printf("%.2f GTQ equivalen a %.2f USD\n", cantidad, resultado);
            break;
        case 2:
            resultado = cantidad * usd_a_gtq;
            printf("%.2f USD equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 3:
            resultado = cantidad / eur_a_gtq;
            printf("%.2f GTQ equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        case 4:
            resultado = cantidad * eur_a_gtq;
            printf("%.2f EUR equivalen a %.2f GTQ\n", cantidad, resultado);
            break;
        case 5:
            resultado = cantidad / eur_a_usd;
            printf("%.2f USD equivalen a %.2f EUR\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}