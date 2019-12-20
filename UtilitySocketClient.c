//
// Created by Oreste Apa on 16/12/2019.
//
#include <string.h>

#include "UtilitySocketClient.h"


//DICHIARAZIONE VARIABILI GLOBALI
int sd1;


void createClientSocket() {

    //DICHIARAZIONE VARIABILI


    //CREAZIONE INDIRIZZO DA ASSEGNARE ALLA SOCKET
    struct sockaddr_in indirizzo;
    indirizzo.sin_family = AF_INET;
    indirizzo.sin_port = htons(5201);
    indirizzo.sin_addr.s_addr = inet_aton("localhost", &indirizzo.sin_addr);



    //CREAZIONE SOCKET
    sd1 = socket(PF_INET, SOCK_STREAM, 0);
    if (sd1 < 0) {
        exit(1);
    }


    //CONNESSIONE SERVER
    if (connect(sd1, (struct sockaddr *) &indirizzo, sizeof(indirizzo)) < 0) {
        close(sd1);
        exit(1);
    }

    //LEGGO DAL SERVER I DATI
    operazione_client(sd1);



}



void operazione_client(int sd){

    char question[100];
    char answer[4][100];
    char user_answer[1];
    memset(question,'\0',100);
        for (int i = 0; i < 2; i++) {
            int n = read(sd1, question, 100);
            write(STDOUT_FILENO, question, n);
            for (int j = 0; j < 4; j++) {
                int m = read(sd1, answer[j], 100);
                write(STDOUT_FILENO, answer[j], m);
            }
            read(STDIN_FILENO,user_answer,1);
            write(sd1,user_answer,1);
            sleep(2);
        }
    close(sd1);




}