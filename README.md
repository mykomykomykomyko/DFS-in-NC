# DFS-in-NC
Depth-first search (DFS) tree construction in Nick's Class (NC).

# The algorithm and how does it work?

Construction of a DFS tree in NC is possible with the usage of a parallel algorithm to explore the edges of the tree in a depth-first order. This can be done by assigning each processor to explore a different branch of the tree in parallel, and then combining the results at the end. This algorithm explores the graph in a depth-first order, starting from the vertex s. It uses a recursive function, DFS, to explore each vertex and its neighbors in parallel, and it adds the vertices to the tree T as they are visited. At the end of the algorithm, T will be a DFS tree of the input graph G.

```
// Input: graph G = (V, E), starting vertex s
// Output: DFS tree T

// Initialize empty tree T
T = empty_tree()

// Perform parallel DFS from s
DFS(s)

// Recursive DFS function
function DFS(v):
  // Mark v as visited
  mark_visited(v)
  // Add v to the tree T
  add_to_tree(T, v)
  // For each neighbor w of v:
  for each w in neighbors(v):
    if w is not visited:
      // Recursively explore w in parallel
      DFS(w)
```
