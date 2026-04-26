#include <stdio.h>
#include <stdlib.h>
#include "airlineTicket.h"

int main()
{
    int array[2][5] = {
        {0},
        {0}};
    int class[2] = {0};
    int classType;
    do
    {
        printMain(array);
        scanf("%d", &classType);
        switch (classType)
        {
        case 1:
            book(array, 1, class);
            system("clear");
            break;
        case 2:
            book(array, 2, class);
            system("clear");
            break;
        default:
            system("clear");
            break;
        }
    } while (class[0] != 5 || class[1] != 5);

    system("clear");
    printMainLast(array);
}