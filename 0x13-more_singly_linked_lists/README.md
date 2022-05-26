# C - More singly linked lists

- In this project, I continued to practice building and using singly linked lists in C.

- **What is linked list.**	

	*) Linked List is `linear` collection of data structure.

	*) A `record` called `node` contain `data` and `address` of `next node`.

	*) `Randomly` stored in memory.
## Header File file_folder.

- `lists.h`: Header file containing definitions and prototypes for all types and functions written for the project.

## Tasks.
* **0. Print list**
  * [0-print_listint.c](https://github.com/Caren-Koroeny/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c) :C function that prints all the elements of a `listint_t` linked list.
    * Returns the number of nodes in the `listint_t` list. 

* **1-listint_len.c**
  * [1-listint_len.c](https://github.com/Caren-Koroeny/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c) :  C function that returns the number of elements in a `listint_t` linked list.

* **2-add_nodeint.c**
  * [2-add_nodeint.c](https://github.com/Caren-Koroeny/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c) : C function that adds a new node at the beginning of a listint_t linked list.
    
    * If the function fails - returns `NULL`.

    * Otherwise - returns the address of the new element.

* **How To add node in the beginning of the list**-
 
 * `case 1`:

	* When list is empty.

	* create a node and assign the address of newly created node to the head

 * `Case 2`: 

* When list has few elements

	* step 1 : create a `new node`. 

	* step 2 : Assign address of `head` to the `next field` of newly created node

	* step 3 : Assign the address of `newly created node to head.`
	
**Note**: Here `head` contains the `address of first node.`

* **3-add_nodeint_end.c**
  * [3-add_nodeint_end.c](https://github.com/Caren-Koroeny/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c) :C function that adds a new node at the end of a `listint_t` linked list.

	* If the function fails - returns `NULL.`
	
	* Otherwise - returns the `address` of the new element.

