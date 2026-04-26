#include <stdio.h>
#include <ctype.h>
#include "airlineTicket.h"

void printMain(int array[2][5])
{
    printf("\t\tWelcome to ABC AIRLINES CORPORATION\n");
    printf("\t\t\tONLINE BOOKING\n\n");
    printf("\t\tFIRST CLASS SECTION: ");
    for (int i = 0; i < 5; i++)
    {
        if (array[0][i] != 0)
        {
            printf("[X] ");
        }
        else
        {
            printf("[%d] ", array[0][i]);
        }
    }
    printf("\n\t\tEconomy Class SECTION: ");
    for (int i = 0; i < 5; i++)
    {
        if (array[1][i] != 0)
        {
            printf("[X] ");
        }
        else
        {
            printf("[%d] ", array[1][i]);
        }
    }
    printf("\n\n\t\t--------------------------\n");
    printf("\t\tA C C O M M O D A T I O N\n");
    printf("\t\t--------------------------\n");
    printf("\t\t[1] FIRST CLASS\n");
    printf("\t\t[2] ECONOMY CLASS\n");
    printf("\t\tPRESS [1 OR 2]: ");
}

void book(int array[2][5], int value, int class[2])
{
    char choice;
    for (int i = 0; i < 5; i++)
    {
        if (array[value - 1][i] == 0)
        {
            array[value - 1][i] = 1;
            class[value - 1]++;
            return;
        }
    }
    if (value - 1 == 0)
    {
        printf("First class is full, would you like to transfer to economy class [Y/N]?: ");
        scanf(" %c", &choice);
        choice = toupper(choice);
        if (class[1] < 5 && choice == 'Y')
        {
            book(array, 2, class);
        }
    }
    else if (value - 1 == 1)
    {
        printf("Economy class is full, would you like to transfer to first class [Y/N]?: ");
        scanf(" %c", &choice);
        choice = toupper(choice);
        if (class[0] < 5 && choice == 'Y')
        {
            book(array, 1, class);
        }
    }
}

void printMainLast(int array[2][5])
{
    printf("\t\tWelcome to ABC AIRLINES CORPORATION\n");
    printf("\t\t\tONLINE BOOKING\n\n");
    printf("\t\tFIRST CLASS SECTION: ");
    for (int i = 0; i < 5; i++)
    {
        if (array[0][i] != 0)
        {
            printf("[X] ");
        }
        else
        {
            printf("[%d] ", array[0][i]);
        }
    }
    printf("\n\t\tECONOMY CLASS SECTION: ");
    for (int i = 0; i < 5; i++)
    {
        if (array[1][i] != 0)
        {
            printf("[X] ");
        }
        else
        {
            printf("[%d] ", array[1][i]);
        }
    }
    printf("\n\t\tTHE AIRPLANE IS FULL\n");
}