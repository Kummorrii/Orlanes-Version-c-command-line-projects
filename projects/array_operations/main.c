#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "arrayOp.h"

int main()
{
    char input;
    int *array = NULL, size;
    do
    {
        printMainMenu();
        scanf(" %c", &input);
        input = toupper(input);
        switch (input)
        {
        case 'A':
            size = arraySize();
            if (size > 0)
            {
                array = createArray(size);
            }
            break;
        case 'B':
            printArray(array, size);
            break;
        }
    } while (input != 'J');
}