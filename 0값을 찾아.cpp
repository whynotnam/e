#include <iostream>
using namespace std;

int main() {
    int i,n,j;
    cin >> i;   // 입력
    int arr1[n];    

   for ( i = 0; i < n; i++) {
   cin >> i;
   arr1[j] = arr1[i];
   cout << arr1[n];
  }

​   int n = sizeof(arr1) / sizeof(arr1[0]);
   int arr2[n];


   for (int i = j; i < n; i++) {
   arr2[i] = 0;
   }

    for (int i = 0; i < n; i++) {
   cout << arr2[i];
   }

}
