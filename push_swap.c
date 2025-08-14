#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list stack_a;
	t_list stack_b;
	int	success;

	init_stack(&stack_a);
    init_stack(&stack_b);

	if (argc == 1)
	{
		return (1);
	}

	success = build_stack_a(&stack_a, argc, argv);

	if (!success)
	{
		free_stack(&stack_a);
		printf("Error\n");
		return (1);
	}

	if (!is_sorted(&stack_a) && stack_a.size <= 5)
        small_sort(&stack_a);
    print_stacks(&stack_a, &stack_b);

    free_stack(&stack_a);
    free_stack(&stack_b);
	return (0);
}

void    init_stack(t_list *stack)
{
    stack->head = NULL;
    stack->size = 0;
}

int build_stack_a(t_list *stack_a, int argc, char **argv)
{
    int    i;
    int             is_input_valid;
    int             number;

    i = 1;
    while (i < argc)
    {
        number = check_and_convert(argv[i], &is_input_valid);
        if (is_input_valid == 0)
            return (0);
        if (add_node_to_stack(stack_a, number) == 0)
            return (0);
        i++;
    }
    return (1);
}

int add_node_to_stack(t_list *stack, int number)
{
    t_node  *new_node;
    t_node  *walker;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return (0);
    new_node->number = number;
    new_node->index = -1;
    new_node->next = NULL;
    if (stack->head == NULL)
        stack->head = new_node;
    else
    {
        walker = stack->head;
        while (walker->next)
            walker = walker->next;
        walker->next = new_node;
    }
    stack->size++;
    return (1);
}

// !!!
void print_stacks(t_list *stack_a, t_list *stack_b)
{
    t_node *a = stack_a->head;
    t_node *b = stack_b->head;

    while (a || b)
    {
        printf("\033[31m");
        if (a)
        {
            printf("%d", a->number);
            a = a->next;
        }
        else
            printf(" ");
        printf("\033[0m");

        printf("  ");

        printf("\033[32m");
        if (b)
        {
            printf("%d", b->number);
            b = b->next;
        }
        else
            printf(" ");
        printf("\033[0m\n");
    }
    printf("a  b\n");
    printf("%i  ", stack_a->size);
    printf("%i\n", stack_b->size);
}

void    free_stack(t_list *stack)
{
    t_node  *walker;
    t_node  *victim;

    walker = stack->head;
    while (walker)
    {
        victim = walker;
        walker = walker->next;
        free(victim);
    }
    stack->head = NULL;
    stack->size = 0;
}
