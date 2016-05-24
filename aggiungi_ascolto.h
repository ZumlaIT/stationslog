#ifndef Station_s_Log_aggiungi_ascolto_h
#define Station_s_Log_aggiungi_ascolto_h

void aggiungi_ascolto (void) {
    
    int controllo;
    int controllo_2;
    int controllo_3;
    
    char *modo_locale = malloc(50 * sizeof(char) + 1);
    char *potenza_locale = malloc(50 * sizeof(char) + 1);
    char *nominativo_locale = malloc(10 * sizeof(char) + 1);
    char *nome_locale = malloc(50 * sizeof(char) + 1);
    char *qth_locale = malloc(50 * sizeof(char) + 1);
    char *locatore_locale = malloc(50 * sizeof(char) + 1);
    char *osservazioni_locale = malloc(1000 * sizeof(char) + 1);
    
    intestazione();

    printf("\033[1m-----AGGIUNTA DI ASCOLTO-----\033[0m\n");
    printf("\n");
    
    printf("\033[1mGENERALITA'\033[0m\n");
    printf("\n");
    
    printf("Numero di QSO: ");
    scanf("%i", &qso);
    
    printf("Data di contatto (gg/mm/aaaa): ");
    scanf("%i/%i/%i", &contatto.giorno, &contatto.mese, &contatto.anno);
    controllo = controllo_data(contatto);
    while (controllo != 1) {
        printf("Data non corretta!\n");
        printf("Inserisci nuovamente la data (gg/mm/aaaa): ");
        scanf("%i/%i/%i", &contatto.giorno, &contatto.mese, &contatto.anno);
        controllo = controllo_data(contatto);
    }
    
    printf("Orario di contatto (hh:mm): ");
    scanf("%i:%i", &contatto_2.ora, &contatto_2.minuto);
    controllo_2 = controllo_ora(contatto_2);
    while (controllo_2 != 1) {
        printf("Orario non corretto!\n");
        printf("Inserisci nuovamente l'orario (hh:mm): ");
        scanf("%i:%i", &contatto_2.ora, &contatto_2.minuto);
        controllo_2 = controllo_ora(contatto_2);
    }
    
    printf("Frequenza (Mhz): ");
    scanf("%lf", &frequenza);
    
    printf("Modo: ");
    scanf(" %[^\n]", modo_locale);
    modo = modo_locale;
    
    printf("Potenza: ");
    scanf(" %[^\n]", potenza_locale);
    potenza = potenza_locale;
    
    printf("\033[1mRAPPORTO DATO\033[0m\n");
    printf("\n");
    
    printf("R - Leggibilità: ");
    scanf("%i", &leggibilità_data);
    while (leggibilità_data < 1 || leggibilità_data > 5) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Illeggibile) e 5 (Perfettamente leggibile);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &leggibilità_data);
    }
    
    printf("S - Forza: ");
    scanf("%i", &forza_data);
    while (forza_data < 1 || forza_data > 9) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Segnale debole, appena percepibile) e 9 (Segnale molto forte);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &forza_data);
    }
    
    printf("T - Tono: ");
    scanf("%i", &tono_dato);
    while (tono_dato < 1 || tono_dato > 9) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Nota ronzante di corrente alternata con gorgoglii) e 9 (Nota perfetta di corrente continua: nessuna traccia di ronzio o di modulazione di alcun tipo);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &tono_dato);
    }
    
    printf("\033[1mRAPPORTO RICEVUTO\033[0m\n");
    printf("\n");
    
    printf("R - Leggibilità: ");
    scanf("%i", &leggibilità_ricevuta);
    while (leggibilità_ricevuta < 1 || leggibilità_ricevuta > 5) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Illeggibile) e 5 (Perfettamente leggibile);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &leggibilità_ricevuta);
    }
    
    printf("S - Forza: ");
    scanf("%i", &forza_ricevuta);
    while (forza_ricevuta < 1 || forza_ricevuta > 9) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Segnale debole, appena percepibile) e 9 (Segnale molto forte);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &forza_ricevuta);
    }
    
    printf("T - Tono: ");
    scanf("%i", &tono_ricevuto);
    while (tono_ricevuto < 1 || tono_ricevuto > 9) {
        printf("Valore non valido!\n");
        printf("Il valore deve essere compreso tra 1 (Nota ronzante di corrente alternata con gorgoglii) e 9 (Nota perfetta di corrente continua: nessuna traccia di ronzio o di modulazione di alcun tipo);\n");
        printf("Inserisci nuovamente il valore: ");
        scanf("%i", &tono_ricevuto);
    }
    
    printf("\033[1mDATI DEL CORRISPONDENTE\033[0m\n");
    printf("\n");
    
    printf("Nominativo: ");
    scanf(" %[^\n]", nominativo_locale);
    nominativo = nominativo_locale;
    
    printf("Nome: ");
    scanf(" %[^\n]", nome_locale);
    nome = nome_locale;
    
    printf("QTH: ");
    scanf(" %[^\n]", qth_locale);
    qth = qth_locale;
    
    printf("Locatore: ");
    scanf(" %[^\n]", locatore_locale);
    locatore = locatore_locale;
    
    printf("Fine ora QSO (hh:mm): ");
    scanf("%i:%i", &fine_qso.ora, &fine_qso.minuto);
    controllo_3 = controllo_ora(fine_qso);
    while (controllo_3 != 1) {
        printf("Orario non corretto!\n");
        printf("Inserisci nuovamente l'orario (hh:mm): ");
        scanf("%i:%i", &fine_qso.ora, &fine_qso.minuto);
        controllo_3 = controllo_ora(fine_qso);
    }
    
    printf("\033[1mOSSERVAZIONI\033[0m\n");
    printf("\n");
    
    printf("Osservazioni (mettere una @ dopo la frase per terminare l'inserimento: ");
    scanf(" %[^@]", osservazioni_locale);
    osservazioni = osservazioni_locale;
    
}

void scrittura_ascolto (void) {
    
    char *id_ascolto_locale = malloc(100 * sizeof(char) + 1);
    
    sprintf(id_ascolto_locale, "%s%i%i%i", nominativo, contatto.giorno, contatto.mese, contatto.anno);
    
    id_ascolto = id_ascolto_locale;
    
    pf = fopen(id_ascolto, "w");
    
    fprintf(pf, "-----GENERALITA'-----\n");
    
    fprintf(pf, "N°. QSO: %i\n", qso);
    
    fprintf(pf, "DATA DI CONTATTO: %i/%i/%i\t", contatto.giorno, contatto.mese, contatto.anno);
    fprintf(pf, "ORA DI CONTATTO: %i:%i\n", contatto_2.ora, contatto_2.minuto);
    
    fprintf(pf, "FREQUENZA: %lf\n", frequenza);
    
    fprintf(pf, "MODO: %s\t", modo);
    fprintf(pf, "POTENZA: %s\n", potenza);
    fprintf(pf, "\n");
    
    fprintf(pf, "-----RAPPORTO DATO-----\n");
    fprintf(pf, "LEGGIBILITA' DATA: %i\n", leggibilità_data);
    fprintf(pf, "FORZA DATA: %i\n", forza_data);
    fprintf(pf, "TONO DATO: %i\n", tono_dato);
    fprintf(pf, "\n");
    
    fprintf(pf, "-----RAPPORTO RICEVUTO-----\n");
    fprintf(pf, "LEGGIBILITA' RICEVUTA: %i\n", leggibilità_ricevuta);
    fprintf(pf, "FORZA RICEVUTA: %i\n", forza_ricevuta);
    fprintf(pf, "TONO RICEVUTO: %i\n", tono_ricevuto);
    fprintf(pf, "\n");
    
    fprintf(pf, "-----DATI DEL CORRISPONDENTE-----\n");
    fprintf(pf, "NOMINATIVO: %s\t", nominativo);
    fprintf(pf, "NOME: %s\n", nome);
    fprintf(pf, "QTH: %s\t", qth);
    fprintf(pf, "LOCATORE: %s\n", locatore);
    fprintf(pf, "FINE ORA QSO: %i:%i\n", fine_qso.ora, fine_qso.minuto);
    fprintf(pf, "\n");
    
    fprintf(pf, "-----OSSERVAZIONI-----\n");
    fprintf(pf, "Osservazioni: %s", osservazioni);
    
    fclose(pf);
}

#endif
