#include <stdio.h>

int main() {
    float temperatura_corrente, temperatura_precedente = 5.0;
    int aumenti = 0, diminuzioni = 0;


    for (int i = 1; i <= 10; i++) {
        printf("Inserisci la temperatura per il giorno %d: ", i);
        scanf("%f", &temperatura_corrente);


        if (temperatura_corrente > temperatura_precedente) {
            aumenti++;
        } else if (temperatura_corrente < temperatura_precedente) {
            diminuzioni++;
        }


        temperatura_precedente = temperatura_corrente;
    }


    printf("La temperatura è aumentata %d volte.\n", aumenti);
    printf("La temperatura è diminuita %d volte.\n", diminuzioni);

    return 0;
}
