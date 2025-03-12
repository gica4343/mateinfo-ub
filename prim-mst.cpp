#include <cstdlib>
#include <functional>
#include <iostream>
#include <queue>
#include <set>
#include <utility>
#include <vector>

using namespace std;

int minCostConnectPoints(vector<vector<int>>& points) {
    int n = points.size();
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < n; i++) {
        int x1 = points[i][0], y1 = points[i][1];
        for (int j = i + 1; j < n; j++) {
            int x2 = points[j][0], y2 = points[j][1];
            int dist = abs(x1 - x2) + abs(y1 - y2);
            adj[i].push_back({dist, j});
            adj[j].push_back({dist, i});
        }
    }
    int res = 0;
    set<int> visit;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minH;
    minH.push({0, 0});
    while (visit.size() < n) {
        pair<int, int> costI = minH.top();
        minH.pop();
        if (visit.find(costI.second) != visit.end()) {
            continue;
        }
        res += costI.first;
        visit.insert(costI.second);
        for (auto neiCost : adj[costI.second]) {
            if (visit.find(neiCost.second) == visit.end()) {
                minH.push({neiCost.first, neiCost.second});
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> points = {{3, 12}, {-2, 5}, {-4, 1}};
    int res = minCostConnectPoints(points);
    cout << res;
}