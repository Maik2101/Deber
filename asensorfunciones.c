#include <stdio.h>//liberias a utilizar

int pisoact = 0; // Piso actual del ascensor
int select; // Piso seleccionado por el usuario
int llamarp; // Piso desde donde se llama el ascensor

void pisoair() {
    printf("Ingrese el piso al que desea ir el ascensor (0-9): ");
    scanf("%d", &select);
    getchar(); // Elimina caracter 

    if (select < 0 || select > 9) { //condicion del hasta un cierto limite caso contrario no hace valido
        printf("Piso no válido\n");
    } else if (select == pisoact) {
        printf("El ascensor ya está en el piso %d\n", pisoact);
    } else {
        llamarp = pisoact;
        pisoact = select;
        printf("El ascensor ha llegado al piso %d\n", pisoact);
    }
}

void verpisoact() {
    printf("El ascensor está en el piso %d\n", pisoact);//mensaje
}

void verubica() {
    if (pisoact == 0) {//condicion del hasta un cierto limite caso contrario no hace valido
        printf("El ascensor se encuentra en el primer piso\n");
    } else {
        printf("El ascensor se encuentra en el piso %d\n", pisoact);
    }
}

int main() {
    while (1) {
        printf("\n\nSeleccione una opción:\n\n");

        printf("1. Ir a un piso\n");
        printf("2. Mostrar piso actual\n");
        printf("3. Mostrar ubicación\n");
        printf("4. Salir del ascensor\n");

        char op = getchar();
        getchar(); // Elimina el caracter 'newline' del buffer

        switch (op) {
            case '1':
                pisoair();
                break;
            case '2':
                verpisoact();
                break;
            case '3':
                verubica();
                break;
            case '4':
                printf("Ha salido del ascensor\n");
                return 0;
            default:
                printf("Opción no válida. Por favor intente de nuevo.\n");
                break;
        }
    }

    return 0;
}
