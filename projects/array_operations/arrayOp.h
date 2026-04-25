#include <stdbool.h>
#ifndef ARRAYOP_H
#define ARRAYOP_H

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
#endif