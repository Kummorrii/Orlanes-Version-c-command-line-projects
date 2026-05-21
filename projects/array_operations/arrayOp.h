#include <stdbool.h>
#ifndef ARRAYOP_H
#define ARRAYOP_H

#define ARRAY_SIZE_LIMIT 100
#define NAME "Jan Bernard L. Abaincia"

#define ESC "\x1b["

#define ANSI_RESET ESC "0m"

#define ANSI_BLACK ESC "30m"
#define ANSI_RED ESC "31m"
#define ANSI_GREEN ESC "32m"
#define ANSI_YELLOW ESC "33m"
#define ANSI_BLUE ESC "34m"
#define ANSI_MAGENTA ESC "35m"
#define ANSI_CYAN ESC "36m"
#define ANSI_WHITE ESC "37m"

#define ANSI_BBLACK ESC "90m"
#define ANSI_BRED ESC "91m"
#define ANSI_BGREEN ESC "92m"
#define ANSI_BYELLOW ESC "93m"
#define ANSI_BBLUE ESC "94m"
#define ANSI_BMAGENTA ESC "95m"
#define ANSI_BCYAN ESC "96m"
#define ANSI_BWHITE ESC "97m"

#define ANSI_MOVE_TO_FMT ESC "%d;%dH"
#define ANSI_MOVE_UP_FMT ESC "%dA"
#define ANSI_MOVE_DOWN_FMT ESC "%dB"
#define ANSI_MOVE_FORWARD_FMT ESC "%dC"
#define ANSI_MOVE_BACK_FMT ESC "%dD"

void printMainMenu();
bool arraySize(int *size);
int *createArray(int *array, int *size);
void printError(int code);
void printArray(int *array, int *size);
void insertAtPosition(int *array, int *size);
void insertFirst(int *array, int *size);
void removeAtPosition(int *array, int *size);
void removeFirst(int *array, int *size);
void locateDataItem(int *array, int *size);
void sortAscending(int *array, int *size);
void sortDescending(int *array, int *size);
#endif