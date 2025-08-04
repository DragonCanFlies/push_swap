#include <stdio.h>
#include "push_swap.h"

int ft_isdigit(int c);
int ft_strcmp(const char *s1, const char *s2);
int	is_valid_argument(char *arg);
long	my_atoi(char *arg);

int check_and_convert(char *arg, int *is_input_valid)
{
	long	result;

	if (!is_valid_argument(arg))
	{
		*is_input_valid = 0;
		return (0);
	}
	result = my_atoi(arg);
	if (result > INT_MAX || result < INT_MIN)
	{
		*is_input_valid = 0;
		return (0);
	}
	*is_input_valid = 1;
	return ((int) result);
}

// return 0 if argument is not an integer, 1 otherwise
// leading zeros are allowed
int	is_valid_argument(char *arg)
{
	if (!*arg)
	    return (0);
	if (*arg == '-' || *arg == '+')
	    arg++;
	if (!*arg)
	    return (0);
	while (*arg)
	{
		if (!ft_isdigit(*arg))
		    return (0);
		arg++;
	}
	return (1);
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

long	my_atoi(char *arg)
{
	int sign;
	long result;

	result = 0;
	sign = 1;
	if (*arg == '-' || *arg == '+')
	{
		if (*arg == '-')
		    sign = -1;
		arg++;
	}
	while (*arg)
	{
		result = 10 * result + (*arg - '0');
		arg++;
	}
	result *= sign;
	return (result);
}

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// int min and int max
// be sure that the int is unique
// need to clean stuff, add to header, modify build stack
// do stuff when no args in main
/*
int	main(int argc, char **argv)
{
	printf("%s\n", *(argv + 1));
	printf("%i\n", my_atoi(*(argv + 1)));
}*/
