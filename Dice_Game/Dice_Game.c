#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Dice_Game.h"

/*
 * The welcome() function presents the user with
 * a welcome message
 */
void welcome()
{
    printf("***\tWelcome to EGR 226 Dice Game\t***\n\n");
}

/*
 * The credits() function prompts the user to
 * enter their credits to play the game. It
 * also returns the credits entered. Error checking
 * is important for the Dice Game.
 *
 * Referenced Stack Overflow for guidance on error
 * checking: checks for non-integers than prompts user
 * to enter their credits to play.
 */
int credits()
{
    // local macros declared
    #define NUM 100

    // local variables declarations
    int e;
    char var[NUM] = "";

    printf("Please enter credits to play: ");
    scanf("%s", &var);

    sscanf(var, "%d", &e);      // Preferred to user sscanf() than atoi()
                                // as atoi does not do error checking

    // isDigit() checks the char array for integers
    while (!isdigit(var[0]))
    {
        printf("Please enter a valid integer greater than 0: ");
        scanf("%s", &var);
    }

    printf("Available Credits: %d\n\n", e);

    return e;
}

//    for (d = 0; d < length; d++)
//    {
//        if (!isdigit(var[d]))
//
//            printf("Please enter a valid integer greater than 1: ");
//            scanf("%s", &var);
//    }
