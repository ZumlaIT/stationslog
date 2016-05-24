#ifndef Station_s_Log_starter_h
#define Station_s_Log_starter_h

void intestazione (void) {
    system("clear");
    printf("\033[1m\033[31m-----LOG DI STAZIONE-----\033[31m\033[0m");
    printf("\n\n");
    
}

void introduzione (void) {
    printf("Benvenuto in LOG DI STAZIONE (Art. 255, c. 2, D.L. 1^ Agosto 2003, n. 259!\n");
    printf("Questo software ti permette di creare diari di ascolti della tua stazione radio.\n");
    printf("Funziona solamente da terminale, per cui è consentito solo l'input di dati da tastiera;\n");
    printf("L'ulitizzo del cursore del mouse non sarà considerato valido.\n");
    printf("Quando inserirai un record di ascolto verrà creato nella stessa cartella del programma un file .txt che potrai consultare da questo programma oppure manualmente in modo diretto dalla cartella.\n");
    printf("Se hai domande, dubbi, o vuoi segnalare un bug, non esitare a contattarci per e-mail!\n");
    printf("Buon ascolto!\n");
    printf("\n");
    
    printf("Per continuare digitare 1: ");
    
}

#endif
