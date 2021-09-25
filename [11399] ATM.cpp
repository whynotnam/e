#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;   // N 입력
    
   int i;
   for ( i = 0; i < N; i++) {
   cin >> i; 
  }

    int P = 0; 
    for (i = 0; i < N; i++) {
           
           P = P + i;
        }

    print("%d", P);
}
