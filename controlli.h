#ifndef Station_s_Log_controlli_h
#define Station_s_Log_controlli_h

int controllo_continua (int a) {
    
    while (a != 1) {
        printf("Selezione non valida!\n");
        printf("Digita nuovamente il numero 1: ");
        scanf("%i", &a);
    }
    return a;
}

int controllo_dicotomico (int a) {
    
    while (a < 1 || a > 2) {
        printf("Selezione non valida!\n");
        printf("Eseguire nuovamente la selezione (1/2): ");
        scanf("%i", &a);
    }
    return a;
}

int controllo_data (struct data d) {
    
    int controllo;
    
    if (d.giorno < 1 || d.giorno > 31 || d.mese < 1 || d.mese > 12 || d.anno < 1800 || d.anno > 3000) {
        controllo = 0;
    }
    else {
        if(d.anno % 4 == 0 && d.anno % 100 != 0) {
            if(d.mese == 1 || d.mese == 3 || d.mese == 5 || d.mese == 7 || d.mese == 10 || d.mese == 12) {
                if (d.giorno >= 1 && d.giorno < 31) {
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
            else if (d.mese == 2) {
                if (d.giorno >= 1 && d.giorno <= 29) {
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
            else if (d.mese == 4 || d.mese == 6 || d.mese == 8 || d.mese == 9 || d.mese == 11) {
                if (d.giorno >= 1 && d.giorno <= 30) {
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
        }
        else {
            if (d.mese == 1 || d.mese == 3 || d.mese == 5 || d.mese == 7 || d.mese == 10 || d.mese == 12) {
                if (d.giorno >= 1 && d.giorno < 31){
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
            else if (d.mese == 2) {
                if (d.giorno >= 1 && d.giorno <= 28) {
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
            else if (d.mese == 4 || d.mese == 6 || d.mese == 8 || d.mese == 9 || d.mese == 11) {
                if (d.giorno >= 1 && d.giorno <= 30) {
                    controllo = 1;
                }
                else {
                    controllo = 0;
                }
            }
        }  
    }
    return controllo;
}

int controllo_ora (struct orario o) {
    
    int controllo;
    
    if (o.ora < 0 || o.ora > 24 && o.minuto < 0 || o.minuto > 59)
        controllo = 0;
    else
        controllo = 1;
    
    return controllo;
}

#endif
