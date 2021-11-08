#include <stdio.h>
#include <string.h>
#include "memory.h"

#define MAXLEN 1000
#define MAXSTR 1000

char *data[MAXSTR] = {0};
int nlines = 0;

int getline(char *str, int maxlen)
{
    int c = 0, i = 0;
    for (; (i <= maxlen) && ((c = getchar()) != '\n'); i++) {
        str[i] = c;
    }
    str[i] = '\n'; 
    str[++i] = '\0';
    return ++i;
}

void readlines()
{
    char *cur_p = NULL;
    int cur_len = 0;
    char cur_str[MAXLEN] = {0};
    while((cur_len = getline(cur_str, MAXLEN)) > 2){
        cur_p = alloc(cur_len);
        strcpy(cur_p, cur_str);
        data[nlines++] = cur_p;
    }
}

void print_data()
{
    printf("Data array: \n");
    for(int i = 0; i < nlines; ++i){
        printf("%s", data[i]);
    }
    printf("\n");
}