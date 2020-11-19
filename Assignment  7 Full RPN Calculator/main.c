#include <math.h>
#include <stdio.h>

/* Assignment 7: Full RPN Calculator
 * Author: Saj Patel
 * Worked with; Miguel, Jesse, Hannah
 */

#include "RPN_linked_list.h"

double evaluate_rpn_expression(RPN_Node *head);


int main() {
    RPN_Node *head = prompt_and_parse();

    printf("Interpreting input as: ");
    print_as_infix(head);

    double result = evaluate_rpn_expression(head);

    printf("Result: %.2lf\n", result);

    free_list(head);
    head = NULL;

    return 0;
}

double evaluate_rpn_expression(RPN_Node *head) {
    // This function should walk through the linked list specified by head.
    // It should also declare another linked list, named stack.
    RPN_Node *current = head;
    RPN_Node *stack = NULL;

    while (current != NULL) {
        if (!current->is_operator) {
            // For each term in the input list, it should check if it is a value or
            // an operator. If it is a value, it should push it on the stack.

            double value = current->value;
            push(&stack, value);
        } else {

            // If it is an operator, it should pop two terms off the stack and
            // use those as the operands to the operator. Be careful of the order of
            // the terms since for some operators that matters.
            if (current->operator == '+') {
                double val1 = pop(&stack);
                double val2 = pop(&stack);
                double answer = val2 + val1;
                push(&stack, answer);
            } else if (current->operator == '/') {
                double val1 = pop(&stack);
                double val2 = pop(&stack);
                if (val1 == 0) {
                    printf("Error! Requested division by 0\n");
                    free_list(stack);
                    return 0;
                } else {
                    double answer = val2 / val1;
                    push(&stack, answer);
                }

            } else if (current->operator == '*') {
                double val1 = pop(&stack);
                double val2 = pop(&stack);
                double answer = val2 * val1;
                push(&stack, answer);
            } else if (current->operator == '^') {
                double val1 = pop(&stack);
                double val2 = pop(&stack);
                if (val1 == 0 && val2 == 0) {
                    printf("Error: 0^0 is indeterminate\n");
                    free_list(stack);
                    return 0;
                } else {
                    double answer = pow(val2, val1);
                    push(&stack, answer);
                }
            } else if (current->operator == '-') {
                double val1 = pop(&stack);
                double val2 = pop(&stack);
                double answer = val2 - val1;
                push(&stack, answer);
            }
        }

        // advance current
        current = current->next;
    }
    // After processing the list, the stack will have one element, which is
    // the answer. Store it in a double, free the stack and return the answer.
    double answer = pop(&stack);
    free_list(stack);
    return answer;
}