#include "head.h"

int		step_cycle(t_lemin *lemin, int *first, uintmax_t i)
{
	int		flag;
	int		end;

	end = 1;
	flag = 0;
	while (i < lemin->ant_count)
	{
		if (!flag)
			*first = i;
		if (!lemin->ants[i]->at_end)
		{
			if (ant_step(lemin, i, flag))
			{
				flag = 1;
				end = 0;
			}
			else
				break ;
		}
		i++;
	}
	return (end);
}
