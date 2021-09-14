#include <stdio.h>

int main() {
    
	int N, K;                  // N = 동전개수, K = 만들 돈(원)
    scanf("%d %d", &N, &K);    // N, K 입력
    
    int i; 
    int coin[10] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000, 50000}; 
    
    // 동전 개수에 따른 동전 출력
    for (i = 0; i < N; i++) {
            printf("%d \n", coin[i]);
        }

    // 필요 동전개수 계산..
    //int size = sizeof(K)/sizeof(coin[]);
    // for (i = 0; i < size; i++) {
        
    //}
    
    //printf("");
	
}