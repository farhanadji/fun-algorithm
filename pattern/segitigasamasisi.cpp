#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i < j){
        cout << " ";
      }
    }
      for(int k=0; k<n; k++){
        if(k > n-i-1){
          cout << " *";
        }
    }
    cout << endl;
  }
  return 0;
}