More Singly Linked Lists
This projects solves the following problems
0. Print lists
Write a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes

1. List length
Write a function that returns the number of elements in a linked listint_t list.
Prototype: size_t listint_len(const listint_t *h);

2. Add node
Write a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

3. Add node at the nd
Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

4. Free lis
Write a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

5. Free
Write a function that frees a listint_t list.
Prototype: void free_listint2(listint_t **head);

6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Prototype: int pop_listint(listint_t **head);
if the linked list is empty return 0

7. Get node at index
Write a function that returns the nth node of a listint_t linked list.

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

9. Insert
Write a function that inserts a new node at a given position.

10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
