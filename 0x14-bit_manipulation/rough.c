#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char *str = "101";
	int power;
	int length = strlen(str);
	power = length - 1;
	int i = 0;
	unsigned int dec = 0;
	while (i < length)
	{
		printf("length %d\n", length);
		printf("power %d\n", power);
		printf("i %d\n", i);
		int f = str[i] - '0';;
		printf("f %i\n", f);
		printf("left shift %d\n", f << power );
		dec = dec + (f << power);
		printf("dec %d\n", dec);
		i++;
		power--;
	}
}