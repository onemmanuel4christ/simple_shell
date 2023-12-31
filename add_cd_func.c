#include "main.h"

/**
 * show_dir - Prints error when cd argument in invalid
 *              i.e. cd -asd22
 * @vars: vars parameter to include
 * Return: Always return void and print a messaje as shown below.
 */
void show_dir(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": invalid option", 0);
	print_str("cd: usage: cd [-] [--]", 0);
}

/**
 * show_dir2 - Prints error message when cd argument doesn'n exist.
 *              i.e. cd das7d32
 * @vars: vars parameter to include
 * Return: Always return void and print a messaje as shown below.
 */
void show_dir2(vars_t *vars)
{
	print_str("-bash: cd: ", 1);
	print_str(vars->array_tokens[1], 1);
	print_str(": Not a directory", 0);
}
