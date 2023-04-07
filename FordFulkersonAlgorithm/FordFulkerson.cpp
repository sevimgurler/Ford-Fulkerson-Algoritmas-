#include <bits/stdc++.h>
using namespace std;

// A�daki kenarlar� temsil etmek i�in bir s�n�f tan�ml�yoruz
class Edge {
public:
    int v, u, w;
    Edge(int V, int U, int W) : v(V), u(U), w(W) {}
};

// Verilen a�daki maksimum ak��� hesaplamak i�in Ford-Fulkerson algoritmas�n� uygulayan fonksiyonu yaz�yoruz
int fordFulkerson(vector<vector<int>>& graph, int s, int t) {
    int n = graph.size();

    // Geriye d�n�� yollar�n� bulmak i�in kullan�lacak parent dizisi
    vector<int> parent(n);

    // Ak���n ba�lang��ta s�f�r oldu�unu varsay�yoruz
    int maxFlow = 0;

    // Artan yol varsa
    while (true) {
        // BFS kullanarak artan bir yol buluyoruz
        fill(parent.begin(), parent.end(), -1);
        queue<pair<int, int>> q;
        q.push(make_pair(s, INT_MAX));
        while (!q.empty()) {
            int u = q.front().first;
            int flow = q.front().second;
            q.pop();
            for (int v = 0; v < n; v++) {
                if (parent[v] == -1 && graph[u][v] > 0) {
                    parent[v] = u;
                    int new_flow = min(flow, graph[u][v]);
                    if (v == t) {
                        // Artan yol bulundu
                        maxFlow += new_flow;
                        // Ak��� art�r�yoruz
                        while (v != s) {
                            int u = parent[v];
                            graph[u][v] -= new_flow;
                            graph[v][u] += new_flow;
                            v = u;
                        }
                        break;
                    }
                    q.push(make_pair(v, new_flow));
                }
            }
            if (parent[t] != -1) {
                break;
            }
        }
        // Artan yol yoksa algoritmay� sonland�r�yoruz
        if (parent[t] == -1) {
            break;
        }
    }
    // Maksimum ak��� d�nd�r�yoruz
    return maxFlow;
}

//  Deneme i�in �rnek bir a� verilmi�tir
int main() {
    vector<vector<int>> graph = { {0, 16, 13, 0, 0, 0},
                                 {0, 0, 10, 12, 0, 0},
                                 {0, 4, 0, 0, 14, 0},
                                 {0, 0, 9, 0, 0, 20},
                                 {0, 0, 0, 7, 0, 4},
                                 {0, 0, 0, 0, 0, 0} };

    int s = 0, t = 5;
    cout << "Maksimum akis: " << fordFulkerson(graph, s, t) << endl;

    return 0;
}