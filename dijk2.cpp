#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

unordered_map<int, int> shortest_path(int n, vector<vector<int>>& edges, int src) {

    unordered_map<int, vector<pair<int, int>>> adj;
    for (int i = 0; i < n; i++) {
        adj[i] = vector<pair<int, int>>();
    }

    for (vector<int>& edge : edges) {
        int s = edge[0], d = edge[1], w = edge[2];
        adj[s].push_back({d, w});
    }
    
    unordered_map<int, int> shortest;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
    min_heap.push({0, src});

    while(!min_heap.empty()) {
        pair<int, int> curr = min_heap.top();
        min_heap.pop();
        int w1 = curr.first, n1 = curr.second;

        if (shortest.find(n1) != shortest.end()) continue;
        shortest[n1] = w1;

        for (pair<int, int>& edge : adj[n1]) {
            int n2 = edge.first, w2 = edge.second;
            if (shortest.find(n2) == shortest.end()) {
                min_heap.push({w1 + w2, n2});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (shortest.find(i) == shortest.end()) {
            shortest[i] = -1;
        }
    }
    return shortest;
}

int main() {
    int n = 5;
    int src = 0;
    vector<vector<int>> edges;
    for (int i = 0; i < 7; i++) {
        int s, d, w;
        cin >> s >> d >> w;
        edges.push_back({s, d, w});
    }
    unordered_map<int, int> r = shortest_path(n, edges, src);
    for (auto& [node, dist] : r) {
        cout << "Node " << node << ": " << (dist == -1 ? "Unreachable" : to_string(dist)) << '\n';
    }

}
