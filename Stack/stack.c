#include "stack.h"

int isEmpty(STACK* stack) {
	if (stack->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

int isFull(STACK* stack) {
	if (stack->top == stack->capacity - 1) {
		return 1;
	}
	else {
		return 0;
	}
}

#ifdef STACK_OVERFLOW

int push(STACK* stack, int data) {
	if (isFull(stack)) {
		return STACK_OVERFLOW;
	}
	else {
		stack->arr[stack->top] = data;
		stack->top++;
	}
	return 1;
}
#endif

void print_status(int d)
{
	printf("Data %d pushed on stack.\n", d);
}

#ifdef STACK_EMPTY 

int pop(STACK* stack) {
	if (isEmpty(stack)) {
	return STACK_EMPTY;
	}
	else {
		int val = stack->arr[stack->top];
		stack->top--;
		return val;
	}
}

#endif

int peek(STACK* ptr, int i){
  int arrayInd = ptr->top - i + 1;
  if(arrayInd < 0){
    return -1;
  } else {
    return ptr->arr[arrayInd];
  }
}
