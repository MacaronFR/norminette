/*
 * Auteur : TURBIEZ Denis
 * Projet : Macaron Norminette
 * Fichier : Source pour entrée analyseur lexical
 */

#include <lexical/in.h>
#include <string.h>

int loadBuffer(char *buf, u_int32_t l, FILE *f){
    long readed = read(f->_fileno, buf, l);
    if(readed == -1){
        perror("Error while reading from file");
        return -1;
    }
    if(readed != l){
        buf[strlen(buf)] = EOF;
        return 0;
    }
    return 1;
}
