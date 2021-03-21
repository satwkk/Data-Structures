#pragma once

#include <stdio.h>
#include <stdlib.h>

#define STACK_OVERFLOW -1
#define STACK_EMPTY -1

typedef struct {
	int capacity;
	int top;
	int* arr;
}STACK;

int isEmpty(STACK*);
int isFull(STACK*);
int pop(STACK*);
int push(STACK*, int);
void print_status(int);
int peek(STACK*, int);
