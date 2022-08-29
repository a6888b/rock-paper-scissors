#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool computer_win(int your_choice, int computer_choice); // protype
int rand_choice(void);                                   // protype

int main(void)
{
    int choice_you = 0;
    int choice_pc = 0;
    int cmpt_you = 0;
    int cmpt_computer = 0;

    bool stop = false;

    while (!stop)
    {
        printf("1: pierre || 2: papier || 3: ciseaux\n");
        printf("Entrez un nombre: ");
        scanf("%d", &choice_you);
        choice_pc = rand_choice();

        if (choice_pc != choice_you)
        {
            if (choice_you >= 1 && choice_you <= 3)
            {
                bool cp_win = computer_win(choice_you, choice_pc);

                if (cp_win)
                {
                    printf("L'ordinateur a gagner\n");
                }
                else
                {
                    printf("L'utilisateur a gagner \n");
                }
            }
            else
            {
                printf("Entrez 1 ou 2 ou 3 \n");
            }
        }
        else
        {
            printf("Egalitée \n");
        }
    }

    return 0;
}

int rand_choice(void)
{
    srand(time(NULL));
    return rand() % 3;
}

bool computer_win(int your_choice, int computer_choice)
{
    return (your_choice == 1 && computer_choice == 2) || (your_choice == 2 && computer_choice == 3) || (your_choice == 3 && computer_choice == 1);
}