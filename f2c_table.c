//
//

#include <stdio.h>

#define F_TO_C(f)	((((f) - 32) * 5) / 9)

int main_f2c(int argc, char* argv[], char** envp)
{
	int f = 0;
	int c = 0;
	int f_max = 300;
	int step = 20;

	for (f=0; f <= f_max; f+= step)
	{
		printf("%d\t%d\n", f, F_TO_C(f));
	}

	return 0;
}