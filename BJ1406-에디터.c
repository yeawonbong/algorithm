#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	str[100001];
	char	*cmdlist;
	char 	*ptr;
	int		cmdnum;
	int		i;

	scanf("%s", str);
	cmdlist = (char*)malloc(scanf("%d", &cmdnum) + 1);

	/*idn()
	{
		if ()
	}*/

/*
	for (i = 0; i < cmdnum; i++)
	{
		
		scanf("%s", &str[i++]);
	}
*/

	printf("%s\n", str);
	printf("%d\n", cmdnum);

	return 0;
}