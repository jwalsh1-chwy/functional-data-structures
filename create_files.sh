#!/bin/bash

# Declare an array of filenames for the data structures
filenames=(
  "functional_stack.c"
  "functional_queue.c"
  "functional_bst.c"
  "functional_trie.c"
  "functional_linked_list_with_tail.c"
  "functional_avl_tree.c"
  "functional_priority_queue.c"
  "functional_deque.c"
  "functional_graph_adj_list.c"
  "functional_graph_adj_matrix.c"
  "functional_circular_linked_list.c"
  "functional_doubly_linked_list.c"
  # Add more filenames as needed
)

# Iterate over the filenames array and touch each file
for filename in "${filenames[@]}"; do
  touch "$filename"
  echo "Created file: $filename"
done

echo "All files have been created."
