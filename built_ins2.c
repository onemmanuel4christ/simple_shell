#include "main.h"
/**
 * new_cd - Changes the current working directory .
 * if no parameter is passed it will change directory to HOME.
 * @vars: A string representing the input from the user.
 */
void new_cd(vars_t *vars)
{
	int index;

	if (vars->array_tokens[1] == NULL)
	{
		index = path_idx(*vars, "HOME");
		chdir((vars->env[index]) + 5);
	}
	else if (str_compare(vars->array_tokens[1], "-") == 0)
		print_str(vars->array_tokens[1], 0);
	else
		chdir(vars->array_tokens[1]);
}
