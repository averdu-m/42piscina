#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int ft_atoi (char *str)
{
	int b;
	int a;
	int c;
	a = 1;
	b = 0;
	while (str[b] == '+' || str[b] == '-' || (str[b] >= 0 && str[b] <= 32))
	{
		if(str[b] == '-')
			a = a * -1;
		b++;
	}
	while (str[b] >= '0' && str[b] <= '9')
	{
		if (c)
			c = c * 10 + (str[b] - 48);
		else
			c = str[b] - 48;
		b++;
	}
	return (a * c);
}

int main ()
{
	char *str="\v945iab34";
	printf("el mio: %d \n", ft_atoi(str));
	printf("el original %d \n", atoi(str));
}
