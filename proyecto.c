#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USUARIOS 1
#define MAX_USUARIO 50
#define MAX_CORREO 50
#define MAX_PASSWORD 12
#define MAX_PREGUNTA 50

// Preguntas secretas
const char *preguntas[] = {
    "nombre de su primera mascota",
    "nombre de su mejor amigo(a)",
    "nombre de su mama",
    "nombre de su comida favorita"
};

void cifrar_contrasena(char contrasena[]) {
    for (int i = 0; i < strlen(contrasena); i++) {
        contrasena[i] += 5;
    }
}

void registrar(char usuarios[][MAX_USUARIO], char correos[][MAX_CORREO],
               char contrasenas[][MAX_PASSWORD], char preguntas_secretas[][MAX_PREGUNTA],
               int selectores[], char respuestas[][MAX_PREGUNTA]) {

    char temporal[MAX_PASSWORD];

    for (int i = 0; i < USUARIOS; i++) {
        printf("Ingrese nombre de usuario (%d): ", i + 1);
        scanf("%49s", usuarios[i]);

        printf("Ingrese correo del usuario (%d): ", i + 1);
        scanf("%49s", correos[i]);

        printf("Ingrese contrasena (%d): ", i + 1);
        scanf("%11s", temporal);
        cifrar_contrasena(temporal);
        strcpy(contrasenas[i], temporal);
        printf("Contrasena cifrada: %s\n", contrasenas[i]);

        printf("Seleccione una pregunta secreta (%d):\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, preguntas[j]);
        }

        do {
            scanf("%d", &selectores[i]);
            if (selectores[i] < 1 || selectores[i] > 4) {
                printf("Opcion invalida. Ingrese un valor entre 1 y 4: ");
            }
        } while (selectores[i] < 1 || selectores[i] > 4);

        strcpy(preguntas_secretas[i], preguntas[selectores[i] - 1]);
        printf("Ingrese su respuesta secreta: ");
        scanf("%49s", respuestas[i]);
    }
}

void mostrar(char usuarios[][MAX_USUARIO], char correos[][MAX_CORREO],
             char contrasenas[][MAX_PASSWORD], char preguntas_secretas[][MAX_PREGUNTA],
             char respuestas[][MAX_PREGUNTA]) {

    for (int i = 0; i < USUARIOS; i++) {
        printf("\n--- Usuario %d ---\n", i + 1);
        printf("Usuario: %s\n", usuarios[i]);
        printf("Correo: %s\n", correos[i]);
        printf("Contrasena cifrada: %s\n", contrasenas[i]);
        printf("Pregunta secreta: %s\n", preguntas_secretas[i]);
        printf("Respuesta secreta: %s\n", respuestas[i]);
    }
}

int main() {
    char usuarios[USUARIOS][MAX_USUARIO];
    char correos[USUARIOS][MAX_CORREO];
    char contrasenas[USUARIOS][MAX_PASSWORD];
    char preguntas_secretas[USUARIOS][MAX_PREGUNTA];
    char respuestas[USUARIOS][MAX_PREGUNTA];
    int selectores[USUARIOS];

    registrar(usuarios, correos, contrasenas, preguntas_secretas, selectores, respuestas);
    mostrar(usuarios, correos, contrasenas, preguntas_secretas, respuestas);

    return EXIT_SUCCESS;
}
