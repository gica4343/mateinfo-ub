#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int v = 7;
    int e = 11;
    unordered_map<char, vector<pair<char, int>>> adj;
    for (int i = 0; i < e; i++) {
        char a, b;
        int c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    for (const auto& [node, neighbors] : adj) {
        cout << "Node " << node << " -> ";
        for (const auto& [neighbor, weight] : neighbors) {
            cout << "(" << neighbor << ", " << weight << ") ";
        }
        cout << '\n';
    }
}
