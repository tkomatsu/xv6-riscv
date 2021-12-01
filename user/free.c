#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[])
{
	printf("free: %d\n", fmem());
	exit(0);
}
