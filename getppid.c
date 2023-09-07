#include <stdio.h>
#include <unistd.h>
/**
 *main - entry point.....prints the ppid of a process
 *
 *
 *return (0) always
 *
 */
int main(void)
{
	pid_t my_ppid;
	my_ppid = getppid();
	printf("%d\n",my_ppid);
	return (0);
}

