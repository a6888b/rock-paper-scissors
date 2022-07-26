#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int random_choice(void); // prototype

int main(void)
{
}

int random_choice(void)
{
    srand(time(NULL)); 
    return rand() % 3; 
}