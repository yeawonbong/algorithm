#include <stdio.h>

#define	VIRUS 1

int	main()
{
	int			pc_num;
	int			pair_num;
	int			pair[2];
	int			pc[102] = {0,};
	int			count = 0;

	pc[1] = 1;
	scanf("%d %d", &pc_num, &pair_num);
	for(int i = 0; i < pair_num; i++)
	{
		scanf("%d %d", &pair[0], &pair[1]);
		if(pc[pair[0]] == VIRUS || pc[pair[1]] == VIRUS)
			for(int j = 0; j < 2; j++)
				pc[pair[j]] = 1;
	}
	for(int k = 2; k <= pc_num; k++)
	{
		//printf("PC%d is : %d\n", k, pc[k]);
		if(pc[k] == VIRUS)
			count++;
	}
	printf("%d\n", count);
	return (0);
}