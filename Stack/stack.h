#pragma once

#include <stdio.h>
#include <stdlib.h>

#define OVERFLOW_MSG "*** Stack Overflow Detected***"
#define EMPTY_MSG "***Stack Empty ! Can't pop anything from empty stack"
#define STACK_FULL 1
#define STACK_EMPTY -1
#define SUCCESS_CODE 0
#define ERROR_CODE -1

typedef struct {
	int capacity;
	int top;
	int* arr;
}STACK;

int isEmpty(STACK*);
int isFull(STACK*);
int pop(STACK*);
void push(STACK*, int);
void print_status(int);
int peek(STACK*, int);
