#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "starter.h"
#include "variabili.h"
#include "controlli.h"
#include "aggiungi_ascolto.h"
#include "controlla_ascolto.h"

int main (void) {
    
    intestazione();
    introduzione();
    scanf("%i", &continua);
    continua = controllo_continua(continua);
    
    intestazione();
    printf("\033[1mMENU PRINCIPALE\033[0m\n");
    printf("\n");
    
    printf("Seleziona l'operazione che desideri effettuare (numero corrispettivo):\n");
    printf("\n");
    
    printf("1. Aggiungi ascolto;\n");
    printf("2. Consulta ascolto;\n");
    printf("\n");
    
    printf("Selezione: ");
    scanf("%i", &selezione_mp);
    selezione_mp = controllo_dicotomico(selezione_mp);
    
    if (selezione_mp == 1) {
        aggiungi_ascolto();
        scrittura_ascolto();
    }
    else if (selezione_mp == 2) {
        controlla_ascolto();
    }
}