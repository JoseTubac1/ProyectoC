#include <stdio.h>

// Definición de tasas de cambio
#define USD_TO_GTQ 7.70
#define EUR_TO_GTQ 9.10

// Función para convertir de quetzales a dólares
float gtq_to_usd(float amount) {
    return amount / USD_TO_GTQ;
}

// Función para convertir de dólares a quetzales
float usd_to_gtq(float amount) {
    return amount * USD_TO_GTQ;
}

// Función para convertir de quetzales a euros
float gtq_to_eur(float amount) {
    return amount / EUR_TO_GTQ;
}

// Función para convertir de euros a quetzales
float eur_to_gtq(float amount) {
    return amount * EUR_TO_GTQ;
}

int main() {
    int choice;
    float amount;

    printf("Bienvenido al conversor de monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Quetzales a Euros\n");
    printf("4. Euros a Quetzales\n");
    printf("Escoja una opción: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &amount);
            printf("%.2f quetzales son %.2f dólares\n", amount, gtq_to_usd(amount));
            break;
        case 2:
            printf("Ingrese la cantidad en dólares: ");
            scanf("%f", &amount);
            printf("%.2f dólares son %.2f quetzales\n", amount, usd_to_gtq(amount));
            break;
        case 3:
            printf("Ingrese la cantidad en quetzales: ");
            scanf("%f", &amount);
            printf("%.2f quetzales son %.2f euros\n", amount, gtq_to_eur(amount));
            break;
        case 4:
            printf("Ingrese la cantidad en euros: ");
            scanf("%f", &amount);
            printf("%.2f euros son %.2f quetzales\n", amount, eur_to_gtq(amount));
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
