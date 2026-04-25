#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "arrayOp.h"

int main()
{
    char input;
    int *array = NULL, size = 0;
    do
    {
        printMainMenu();
        scanf(" %c", &input);
        input = toupper(input);
        switch (input)
        {
        case 'A':
            array = createArray(array, &size);
            break;
        case 'B':
            printArray(array, &size);
            break;
        }
    } while (input != 'J');
}