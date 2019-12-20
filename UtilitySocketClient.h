//
// Created by Oreste Apa on 16/12/2019.
//

#ifndef QUIZGAMECLIENT_UTILITYSOCKETCLIENT_H
#define QUIZGAMECLIENT_UTILITYSOCKETCLIENT_H






/* *************************************************+ */

//LIBRERIE
#include <netinet/in.h>
#include <arpa/inet.h>
#include <zconf.h>
#include <stdlib.h>
#include <stdio.h>


/* *************************************************+ */

//COSTANTI






/* *************************************************+ */

//STRUTTURE










/* *************************************************+ */

//FUNZIONI RELATIVE ALLA CREAZIONE E GESTIONE SOCKET
void createClientSocket();
void operazione_client(int sd);







/* *************************************************+ */

#endif //QUIZGAMECLIENT_UTILITYSOCKETCLIENT_H
