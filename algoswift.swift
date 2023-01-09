var T: [Int] = []
var visited: [Bool] = [Bool](repeating: false, count: G.count)
DFS(G, s, &T)

func DFS(_ G: [Int: [Int]], _ v: Int, _ T: inout [Int]) {  
  visited[v] = true
  T.append(v)
  for w in G[v]! {
    if !visited[w] {
      DFS(G, w, &T)
    }
  }
}

let G = [
  0: [1, 2],
  1: [0, 2],
  2: [0, 1, 3],
  3: [2]
]
let s = 0
var T = DFS(G, s)
print(T)  
