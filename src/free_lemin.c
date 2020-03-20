#include "head.h"

void	free_edges(t_lemin *lemin)
{
	int		i;

	i = 0;
	while (i < lemin->node_count)
	{
		free(lemin->edges[i]);
		i++;
	}
	free(lemin->edges);
}

void	free_lemin(t_lemin **lemin)
{
	free_nodes(*lemin);
	free_out(*lemin);
	free_paths(*lemin);
	free_ants(*lemin);
	free_names(*lemin);
	free_edges(*lemin);
	free((*lemin)->visited);
	free((*lemin)->fastest);
	free(*lemin);
}
