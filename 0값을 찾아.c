#include <stdio.h>

int main() {
    
	int i,n;

	scanf("%d", &n);	// 입력
	int arr1[n];

	for (i=0; i<n; i++)  {
	scanf("%d", &arr1[i]); 
	}

​	int n = sizeof(arr1) / sizeof(arr1[0]);
	int arr2[n];
	int j = 0;

	for (int i = j; i < n; i++) {
	arr2[i] = 0;
	}

	for (int i = 0; i < n; i++) {
	printf("%d ", arr2[i]);
	}

	return 0;
}