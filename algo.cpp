#include <vector>
#include <unordered_map>


std::vector<int> T;
std::vector<bool> visited;
DFS(G, s, T);


void DFS(std::unordered_map<int, std::vector<int>>& G, int v, std::vector<int>& T) {
  visited[v] = true;
  T.push_back(v); 
  for (int w : G[v]) {
    if (!visited[w]) {
      
      DFS(G, w, T);
    }
  }
}
std::unordered_map<int, std::vector<int>> G = {
  {0, {1, 2}},
  {1, {0, 2}},
  {2, {0, 1, 3}},
  {3, {2}}
};
int s = 0;
std::vector<int> T = DFS(G, s);
for (int v : T) {
  std::cout << v << " ";
}