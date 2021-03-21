#include "stack.h"

int main(int argc, char** argv) {
	STACK* stack = (STACK*)malloc(sizeof(STACK));
	stack->capacity = 10;
	stack->top = -1;
	stack->arr = (int*)malloc(stack->capacity * sizeof(int));
	for (int i = 0; i < stack->capacity; i++) {
		int num;
		printf("Enter a number: ");
		scanf_s("%d", &num);
		push(stack, num);
	}

	free(stack->arr);
	free(stack);
}