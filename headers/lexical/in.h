/*
 * Auteur : TURBIEZ Denis
 * Projet : Macaron Norminette
 * Fichier : Header pour entrée analyseur lexical
 */

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

#ifndef NORMINETTE_IN_H
#define NORMINETTE_IN_H

int loadBuffer(char *buffer, u_int32_t length, FILE *file);

#endif //NORMINETTE_IN_H
