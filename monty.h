#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_m - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO HolbertonP
 */
typedef struct stack_m
{
	int n;
	struct stack_m *prev;
	struct stack_m *next;
} stack_t;
/**
 * struct bus_mt - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_mt
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO HolbertonP
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_reallocmt(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t get_mtstdin(char **lineptr, int file);
char  *cleanline_mt(char *content);
void push_mt(stack_t **head, unsigned int number);
void pall_mt(stack_t **head, unsigned int number);
void pint_mt(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pop_mt(stack_t **head, unsigned int counter);
void swap_mt(stack_t **head, unsigned int counter);
void add_mt(stack_t **head, unsigned int counter);
void nop_mt(stack_t **head, unsigned int counter);
void sub_mt(stack_t **head, unsigned int counter);
void div_mt(stack_t **head, unsigned int counter);
void mul_mt(stack_t **head, unsigned int counter);
void mod_mt(stack_t **head, unsigned int counter);
void pchar_mt(stack_t **head, unsigned int counter);
void pstr_mt(stack_t **head, unsigned int counter);
void rotl_mt(stack_t **head, unsigned int counter);
void rotr_mt(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode_mt(stack_t **head, int n);
void addqueue_mt(stack_t **head, int n);
void queue_mt(stack_t **head, unsigned int counter);
void stack_mt(stack_t **head, unsigned int counter);
#endif
