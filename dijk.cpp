#include <iostream>
#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n = 5;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    vector<long long> cost(n + 1, (1LL << 60));
    vector<int> vis(n + 1);
    cost[1] = 0;

    priority_queue<pair<long long, int>> s;
    s.push({0, 1});

    while (!s.empty()) {
        pair<long long, int> smallest = s.top();
        s.pop();

        if (vis[smallest.second] == 1) {
            continue;
        }
        vis[smallest.second] = 1;

        for (int i = 0; i < (int)graph[smallest.second].size(); i++) {
            int next = graph[smallest.second][i].first;
            int val = graph[smallest.second][i].second;

            if (-smallest.first + val < cost[next]) {
                cost[next] = -smallest.first + val;
                s.push({-cost[next], next});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << cost[i] << ' ';
    }
}
