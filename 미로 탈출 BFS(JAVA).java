
// 미로 탈출 BFS 자바

import java.io.*;
import java.util.*;

public class so {

	public static int n, m;
	public static int [][] graph = new int [200][200];

	// 이동할 4 방향 정의 상 하 좌 우
	public static int dx[] = {-1, 1, 0, 0};
	public static int dy[] = {0. 0. -1. 1};

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		n = scanner.nextInt();  // n 입력
		m = scanner.nextInt(); // m 입력
		scanner.nextLine(); 	    // 버퍼 지우기
		System.out.println("n : " + n + "m : " + m);

		// 2차원 배열 정보 입력
		for (int i = 0; i < n; i++) {
			String str = scanner.nextLine();
				for (int j = 0; j < m; j++) {
					graph[i][j] = str.charAt(j) - '0';
				}
		}
	scanner.close();
	System.out.println("result = " + bfs(0,0));
	}

// BFS 특정 노드 방문 , 상하좌우 연결된 모든 노드 방문
public static int bfs (int x, int y) {
	Queue<Node> queue = new LinkedList<>();
	queue.add(new Node(x,y));

	// 큐가 빌 때까지 반복
	while (!queue.isEmpty()) {
		Node node = queue.poll();
		x = node.getX();
		y = node.getY();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			// 미로 범위 벗어나면 무시
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			// 한번 왔던 위치 및 괴물 있는 위치 무시
			if(graph[nx][ny] == 1) {
				graph[nx][ny] = graph[x][y] + 1;
				queue.add(new Node(nx, ny));
			}
		}
	}
	// 가장 오른쪽 아래 최단거리 반환
	return graph[n-1][m-1];
	}

	static class Node {
		final private int x;
		final private int y;
		Node (int x, int y) {
			this.x = x;	
			this.y = y;
		}
			public int getX() { return x; }
			public int getY() { return y; }
	}
}
