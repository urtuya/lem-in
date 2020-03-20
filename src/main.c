#include "head.h"

int		main(void)
{
	t_lemin	*lemin;

	lemin = init_lemin();
	read_map(lemin);
	check_read(lemin);
	init_ants(lemin);
	max_flow(lemin, 0);
	print_map(lemin);
	cycle(lemin);
	free_lemin(&lemin);
	return (0);
}
