#ifndef Station_s_Log_controlla_ascolto_h
#define Station_s_Log_controlla_ascolto_h

void controlla_ascolto (void) {
    
    char *nominativo_locale = malloc(10 * sizeof(char) + 1);
    char *id_ascolto_locale = malloc(100 * sizeof(char) + 1);
    
    printf("Inserisci il nominativo dell'interlocutore: ");
    scanf(" %[^\n]", nominativo_locale);
    nominativo = nominativo_locale;
    
    printf("Inserisci la data in cui hai avuto una trasmissione con l'iteressato sopra indicato (gg/mm/aaaa): ");
    scanf("%i/%i/%i", &contatto.giorno, &contatto.mese, &contatto.anno);
    
    sprintf(id_ascolto_locale, "%s%i%i%i", nominativo, contatto.giorno, contatto.mese, contatto.anno);
    id_ascolto = id_ascolto_locale;
    
    system("clear");
    intestazione();
    
    pf = fopen(id_ascolto, "r");
    
    if (pf) {
        while (!feof(pf)) {
            fscanf(pf, " %[^\n]", id_ascolto);
            printf("%s\n\n", id_ascolto);
        }
        fclose(pf);
    }
    else {
        printf("Errore durante l'apertura del file.");
    }

}

#endif

