#include "stack.h"

int isEmpty(STACK* stack) {
	return stack->top == -1 ? SUCCESS_CODE : ERROR_CODE;
}

int isFull(STACK* stack) {
	return stack->top == stack->capacity - 1 ? SUCCESS_CODE : ERROR_CODE;
}

#ifdef OVERFLOW_MSG 
void push(STACK* stack, int data) {
	if (isFull(stack)) 
		return OVERFLOW_MSG;
	else {
		stack->arr[++stack->top] = data;
		printf("Data %d pushed onto stack successfully.\n", data);
	}
}
#endif

#if defined STACK_EMPTY && defined EMPTY_MSG
int pop(STACK* stack) {
	if (isEmpty(stack)) {
		printf("%s\n", EMPTY_MSG);
		return STACK_EMPTY;
	}
	else {
		int val = stack->arr[stack->top--];
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
