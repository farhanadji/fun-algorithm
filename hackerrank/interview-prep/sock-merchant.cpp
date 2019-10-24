#include<bits/stdc++.h>

using namespace std;

int main(){
  int arr[101] = {};
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    arr[x]++;
  }

  int result = 0;
  for(int i=0; i<101; i++){
    result += arr[i]/2;
  }

  cout << result;

return 0;
}