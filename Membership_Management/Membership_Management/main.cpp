#include "management_program.h"

int main(void)
{
	ManagementProgram program;

	atexit(program.quit);
	program.execute();

	return 0;
}