#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define MAX_LENGTH 40000
#include <stdbool.h>
#define div my_div
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_strdup(char *str);
void cmd_caller(char *cmd, unsigned int line, stack_t **top);
stack_t *create_node(int n);
void push(stack_t **top, unsigned int line_number);
void pall(stack_t **top, unsigned int line_number);
void free_all(stack_t **head);
ssize_t intial_check(int argc, char **argv);
void check_malloc(void);
void pint(stack_t **stack, unsigned int line);
void pop(stack_t **stack, unsigned int line);
int is_empty(stack_t *stack);
void swap(stack_t **stack, unsigned int line);
void rotr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void div(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
bool is_digit(const char *value);
#endif /* MONTY_H */
