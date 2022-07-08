#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get operation and perforn
 * @s: An input char pointer
 *  Return: a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		 {"+", op_add},
		 {"-", op_sub},
		 {"*", op_mul},
		 {"/", op_div},
		 {"%", op_mod},
		 {NULL, NULL}
	 };

	 int i;

	 while (i < 5)
	 {
		 if (*ops[i].op == *s && *(s + 1) == '\0')
			 return (ops[i].f);
		 i++;
	 }

	 return (NULL);
}
