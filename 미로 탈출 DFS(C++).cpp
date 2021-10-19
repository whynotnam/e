
// 미로 탈출 C++ DFS

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m;
int graph[201][201];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int main(void) {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
		scanf("%1d", &graph[i],[j];
		}
	}


	int dfs(int x, int y) {
		// 스택 라이브러리 사용
		stack<pair<int, int> >st;
		st.push({x, y});

		// 스택이 빌 때까지 반복
		while (!st.empty()) {
			int x = st.top().first;
			int y = st.top().second;
			st.pop();
	
			// 현 위치에서 4가지 방향으로 위치 확인
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				// 미로 찾기 공간 벗어난 경우 무시
				if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

				// 벽인 경우 무시
				if (graph[nx][ny] == 0 ) continue;

				// 해당 노드를 처음 방문한 경우에 최단 거리 기록
				if (graph[nx][ny] == 1 {
					graph[nx][ny] == graph[x][y] + 1;
					st.push({nx, ny});
				}
			} 
		}
		// 가장 오른쪽 아래 까지 최단 거리 반환
		return graph[n-1][m-1];
	}

	cout << dfs(0,0) << '\n';
	return 0;
}