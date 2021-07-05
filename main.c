#include <stdio.h>
#include <sys/statvfs.h>
#include <lexical/in.h>
#include <stdlib.h>

int main() {
    struct statvfs fi;
    statvfs("/", &fi);
    char *in = malloc(sizeof(char) * 2 * fi.f_bsize);
    FILE *f = fopen("../main.c", "r");
    loadBuffer(in, fi.f_bsize, f);
    free(in);
    fclose(f);
    return 0;
}