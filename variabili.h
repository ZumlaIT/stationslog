#ifndef Station_s_Log_variabili_h
#define Station_s_Log_variabili_h

struct data {
    int giorno;
    int mese;
    int anno;
};

struct orario {
    int ora;
    int minuto;
};

FILE *pf;

struct data contatto;
struct orario contatto_2;
struct orario fine_qso;

int continua;
int selezione_mp;
int qso;
int leggibilità_data;
int forza_data;
int tono_dato;
int leggibilità_ricevuta;
int forza_ricevuta;
int tono_ricevuto;

double frequenza;

char *modo;
char *potenza;
char *nominativo;
char *nome;
char *qth;
char *locatore;
char *osservazioni;

char *id_ascolto;


#endif
