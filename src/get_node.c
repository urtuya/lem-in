#include "head.h"

t_node	*get_node(t_lemin *lemin, char **split)
{
	t_node *node;

	if (!lemin->nodes)
	{
		check_malloc(lemin->nodes = (t_node*)malloc(sizeof(t_node)));
		node = lemin->nodes;
	}
	else
	{
		node = lemin->nodes;
		while (node->next)
		{
			if (!ft_strcmp(node->name, split[0]) ||
					coord_check(node->loc, split))
				error_msg("ERROR\n");
			node = node->next;
		}
		if (!ft_strcmp(node->name, split[0]) ||
				coord_check(node->loc, split))
			error_msg("ERROR\n");
		check_malloc(node->next = (t_node*)malloc(sizeof(t_node)));
		node = node->next;
	}
	return (node);
}
