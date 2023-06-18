#include <bits/stdc++.h>


void ABC287_task_A(){
    int N = 0;

    std::cin >> N;
     
    int count = 0;
    for (int i = 0; i < N; i++){
      std::string s;
        std::cin >> s;
        if ( s == "For" ) count++;
    }

    (count > N/2) ? std::cout << "Yes" : std::cout << "No";
}

void ABC287_task_B(){
  int N, M = 0;
  std::vector<std::string> S;
  std::vector<std::string> T;

  std::cin >> N >> M;

  for (int i = 0; i < N; i++){
    std::string s;
    std::cin >> s;
    S.push_back(s);
  }
  for(int i = 0; i < M; i++){
    std::string t;
    std::cin >> t;
    T.push_back(t);
  }

  int count = 0;
  for (int i = 0; i < N; i++){
    for (int j = 0; j < M; j++){
      int result = S[i].compare(3, 3, T[j]);
      if (result == 0){
        count++;
        break;
      }
    }
  }

  // output
  std::cout << count;
}

void ABC287_task_C(){
  int n, m;
  std::cin >> n >> m;
  std::vector<std::vector<int>> graph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        std::cin >> u >> v;
        u -= 1;
        v -= 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // 辺の本数はN-1である確認
    if (m != n - 1) {
      std::cout << "No\n";
        return;
    }

    // 全ての頂点の次数が2以下である確認
    for (int i = 0; i < n; ++i) {
        if (graph[i].size() > 2) {
          std::cout << "No\n";
            return;
        }
    }


    // BFS実施
    // ・reach というベクターを作成して各ノードの到達状態を管理します。
    // ・queue を作成して探索のためのキューを用意します。
    // ・最初のノード（0）を到達済みとマークし、キューに追加します。
    std::vector<bool> reach(n);
    std::queue<int> que;
    reach[0] = true;
    que.push(0);

    // ・キューが空になるまで、キューからノードを取り出し（これを u とします）、
    // ・そのノードから到達できる全てのノード（これを v とします）を確認します。
    // ・もしまだ到達していないノードがあれば、それを到達済みとマークし、
    // 　キューに追加します。
    while (not que.empty()) {
        const int u = que.front();
        que.pop();


        for (const int v : graph[u]) {
            if (not reach[v]) {
                reach[v] = true;
                que.push(v);
            }
        }
    }


    // 全てのノードが到達可能かチェック
    for (int i = 0; i < n; ++i) {
        if (!reach[i]) {
          std::cout << "No\n";
            return;
        }
    }
    std::cout << "Yes\n";
    return;
}

int main(){
    ABC287_task_C();
    return 0;
}
