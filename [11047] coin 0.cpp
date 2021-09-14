#include <iostream>
using namespace std;

int main() {
	int N, K;
    cin >> N;   // N, K 입력
    cin >> K;
    
    int i; 
    int coin[10] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000}; 
    
    
    for (i = 0; i < N; i++) {
            // 동전 개수에 따른 동전 출력
            printf("%d \n", coin[i]);
        }

    // 필요 동전개수 계산..
}