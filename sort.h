#ifndef _SORT_H_
#define _SORT_H_

/*** LIBRARY HEADER FILES *****/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <math.h>


/*** Data structure for doubly linked list ***/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*** Functions prototypes ***/

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
/*void sort_deck(deck_node_t **deck); */
 /* void print_deck(const deck_node_t *deck); */
 /* deck_node_t *init_deck(const card_t cards[52]); */
listint_t *create_listint(const int *array, size_t size);
void method_quick_sort(int *array, size_t size, int left, int right);
void swap(int *array, size_t size, int a, int b);
int max_element(int *array, size_t size);
void insertion_sort_list(listint_t **list);
int lomuto_partition(int *array, size_t size, int first_elmt, int last_elmt);
int *max_length(int *array, unsigned int size);
void swap_node(listint_t **list, listint_t *node, int fwd);
void quick_sort_hoare(int *array, size_t size);

#endif /* _SORT_H_ */
