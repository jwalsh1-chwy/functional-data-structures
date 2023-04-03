# Functional Data Structures

This repository contains implementations of various data structures in a purely functional style using the C programming language. Each data structure is implemented in a separate C file, and the repository includes a Makefile for building all the files.

## Data Structures

Below is a list of the data structures implemented in this repository, along with a brief description of each:

1. `functional_stack.c` - Implementation of a functional stack with push and pop operations.

2. `functional_queue.c` - Implementation of a functional queue with enqueue and dequeue operations.

3. `functional_bst.c` - Implementation of a functional binary search tree (BST) with insert, delete, and search operations.

4. `functional_trie.c` - Implementation of a functional trie (prefix tree) for string insertion and searching.

5. `functional_linked_list_with_tail.c` - Implementation of a functional linked list with tail pointer for efficient insertions at the end.

6. `functional_avl_tree.c` - Implementation of a functional AVL tree with balancing after insertions and deletions.

7. `functional_priority_queue.c` - Implementation of a functional priority queue using a binary heap.

8. `functional_deque.c` - Implementation of a functional double-ended queue (deque) with operations to add and remove elements from both ends.

9. `functional_graph_adj_list.c` - Implementation of a functional graph using an adjacency list representation.

10. `functional_graph_adj_matrix.c` - Implementation of a functional graph using an adjacency matrix representation.

11. `functional_circular_linked_list.c` - Implementation of a functional circular linked list.

12. `functional_doubly_linked_list.c` - Implementation of a functional doubly linked list with operations to add and remove elements from both ends.

## Building the Files

To build all the files, run the following command in the root directory of the repository:

```
make
```

To clean up the executables, you can run the following command:

```
make clean 
```


## License

This repository is available under the [MIT License](LICENSE).