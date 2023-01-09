T = []
visited = [False] * len(G)
DFS(G, s, T)
def DFS(G, v, T):
  visited[v] = True
  T.append(v)
  for w in G[v]:
    if not visited[w]:
      DFS(G, w, T)
G = {
  0: [1, 2],
  1: [0, 2],
  2: [0, 1, 3],
  3: [2]
}
s = 0
T = DFS(G, s)
print(T)
