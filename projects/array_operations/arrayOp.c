#include <stdio.h>
#include <stdlib.h>
#include "arrayOp.h"

void printMainMenu()
{
    system("clear");
    printf("\t\t Project in CSIT122-Programming-2\n");
    printf("\t\t Authored by Jan Bernard L. Abaincia\n");
    printf("\t╔═══════════════════════════════════════════════════════╗\n");
    printf("\t║\t\t--Array Operations--\t\t\t║\n");
    printf("\t║\t\tA.) Initialize Array\t\t\t║\n");
    printf("\t║\t\tB.) Print Array\t\t\t\t║\n");
    printf("\t║\t\tC.) Insert At Position\t\t\t║\n");
    printf("\t║\t\tD.) Insert Front\t\t\t║\n");
    printf("\t║\t\tE.) Remove At Position\t\t\t║\n");
    printf("\t║\t\tF.) Remove Front\t\t\t║\n");
    printf("\t║\t\tG.) Locate Data Item\t\t\t║\n");
    printf("\t║\t\tH.) SortAscending(Bubble Sort)\t\t║\n");
    printf("\t║\t\tI.) SortDescending(Bubble Sort)\t\t║\n");
    printf("\t║\t\tJ.) Exit\t\t\t\t║\n");
    printf("\t║\t\t\t\t\t\t\t║\n");
    printf("\t╚═══════════════════════════════════════════════════════╝\n");
    printf("\t\t\t Enter Your Choice (A-J): ");
}

void printError(int code)
{
    switch (code)
    {
    case 1:
        puts("The size of the array must be an integer value.");
        break;

    case 2:
        puts("The size of the array must be an integer value.");
        break;
    case 3:
        puts("Array not found.");
        break;
    default:
        puts("Default");
    }
}

int arraySize()
{
    system("clear");
    int size;
    printf("Enter the size of the array (>0): ");
    if (scanf("%d", &size) != 1)
    {
        printError(1);
        system("clear");
        printMainMenu();
        return 0;
    }
    if (size <= 0)
    {
        printError(2);
        system("clear");
        printMainMenu();
        return 0;
    }
    return size;
}

int *createArray(int size)
{
    int *array = malloc(size * sizeof(int));

    if (array == NULL)
    {
        puts("Memory allocation failed!");
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &array[i]) != 1)
        {
            --i;
            getchar();
        }
    }
    return array;
}

void printArray(int *array, int size)
{
    if (array == NULL)
    {
        system("clear");
        printError(3);
        getchar();
        getchar();
        return;
    }
    system("clear");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nPress any key to continue");
    getchar();
    getchar();
}