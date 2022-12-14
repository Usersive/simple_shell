#include "sshell.h"
/**
 * main - shell skeleton
 * @argc: number of arguments in the input
 * @argv: arguments in the input
 * @envp: environment variables
 * Return: 0 on Success
 */
int main(int argc, char *argv[], char *envp[])
{

	if (argc == 1)
	{
		_argv_nil(argv, envp);
	}
	else if (argc == 2)
	{
		_argv_plus(argv, envp);
	}
	else
	{
		write(STDIN_FILENO, "NO ADMITTED AMOUNT OF ARGUMENTS", 31);
		write(STDIN_FILENO, "\n", 1);
	}
	return (0);
}
