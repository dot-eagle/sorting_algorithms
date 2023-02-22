#include "sort.h"

void swap_node(listint_t **list, listint_t *node, int fwd);


/**
 * cocktail_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Cocktail shaker sort algorithm
 * @list: of elements to swap
 *
 * Return: void/nothing
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *runner, *step; /* could be prv or nxt node,condition fwd */
	int fwd = 1;	/* sorting -> backward(0), forward(1) */
	/* int done = 0;	* finish */

	if (!list || !*list)
		return;
	runner = *list;
	while (1)
	{
		if (fwd)
		{
			step = runner->next;	/** end of line in sight? **/
			if (!step)
			{
				/* done = 1; */
				fwd = !fwd;
				continue;
			}
		}
		else
		{
			step = runner->prev;	/** beginning of line in sight ? **/
			if (!step)
			{
				if (!step) /** checks that fwd & bkwd steps ran unchanged **/
					break;
				fwd = !fwd;
				continue;
			}
		}
		/** is bkwd && a < b or is fwd && a > b **/
		if (!(fwd ^ (runner->n > step->n)) && runner->n != step->n)
		{
			/* done = 0; */
			swap_node(list, runner, fwd);
			print_list(*list);
		}
		else
			runner = step;
	}
}

/* *runner;      * sorting -> backward(0), forward(1) */

/**
 * swap_node - swap nodes from list of array
 *
 * @list: input list of array
 * @node: node to swap asap
 * @fwd: swap backward (0) or forwad (1)
 *
 * Return: void nothing
 */

void swap_node(listint_t **list, listint_t *node, int fwd)
{
	listint_t *tmp1, *tmp2, *tmp3, *tmp4;

	if (fwd)
	{
		tmp2 = node;
		tmp3 = node->next;
	}
	else
	{
		tmp2 = node->prev;
		tmp3 = node;
	}

	if (tmp2)
	{
		tmp1 = tmp2->prev;
	}
	if (tmp3)
	{
		tmp4 = tmp3->next;
	}
	if (tmp1)
	{
		tmp1->next = tmp3;
	}
	else
	{
		*list = tmp3;
	}

	tmp3->next = tmp2;
	tmp2->next = tmp4;

	if (tmp4)
	{
		tmp4->prev = tmp2;
	}

	tmp2->prev = tmp3;
	tmp3->prev = tmp1;
}
