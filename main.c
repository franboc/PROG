#include <stdio.h>
#include "operazioni.h"

int main(int argc, char const *argv[])
{
    printf("Somma 3+4: %d\n", somma(3, 4));
    printf("Prodotto 4*6: %d\n", prod(4, 6));
    printf("Quadrato di 5: %d", quad(5));
    return 0;
}   