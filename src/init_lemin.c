#include "head.h"

t_lemin	*init_lemin(void)
{
	t_lemin	*lemin;

	check_malloc(lemin = (t_lemin*)malloc(sizeof(t_lemin)));
	lemin->part = 0;
	lemin->comment = 0;
	lemin->start = 0;
	lemin->end = 0;
	lemin->start_index = 0;
	lemin->end_index = 0;
	lemin->ant_count = 0;
	lemin->node_count = 0;
	lemin->link_count = 0;
	lemin->nodes = NULL;
	lemin->start_node = NULL;
	lemin->end_node = NULL;
	lemin->paths = NULL;
	lemin->ants = NULL;
	lemin->out = NULL;
	lemin->names = NULL;
	lemin->edges = NULL;
	lemin->fastest = NULL;
	lemin->visited = NULL;
	return (lemin);
}
