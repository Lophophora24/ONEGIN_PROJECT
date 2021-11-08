#include "memory.h"

#define MEMSIZE 5000

static char MEMORY[MEMSIZE] = {0};
static char *pointer_to_free_memory = MEMORY;

char *alloc(int n)
{
    if (MEMORY + MEMSIZE - pointer_to_free_memory >= n){
        pointer_to_free_memory += n;
        return pointer_to_free_memory - n;
    } else {
        return 0;
    }            
}

void afree(char *p)
{
    if (p >= MEMORY && p < MEMORY + MEMSIZE)
        pointer_to_free_memory = p;
}