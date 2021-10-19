
# 미로 탈출 BFS

from collections import deque

# n, m 공백 기준으로 입력
n, m = map(int, input().split())

# 2차원 리스트 맵 정보 입력
graph = []
for i in range(n);
	graph.append(list(map(int, input())))

# 이동할 4 방향 정의 (상 하 좌 우)
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


# BFS 소스 구현
def bfs (x,y);
	
	# deque 라이브러리 사용
	queue = deque()
	queue.append((x, y))

	# 큐가 빌 때까지 반복
	while queue:
		x, y = queue.popleft()
		
		# 현 위치에서 4가지 방향으로 위치 확인
		for i in range(4) :
			nx = x + dx[i]
			ny = y + dy[i]

			# 미로 찾기 공간을 벗어난 경우 무시
			if nx < 0 or nx >= n or ny < 0 or ny >= m : continue
			# 벽인 경우 무시
			if graph[nx][ny] == 0 : continue
			# 처음 방문한 경우에만 최단 거리 기록
			if graph [nx][ny] == 1 :
				graph[nx][ny] = graph[x][y] + 1
				queue.append((nx, ny))

	# 가장 오른 쪽 아래 최단 거리 반환
	return graph[n-1][m-1]

# BFS 수행 결과 출력
print(bfs(0,0))

