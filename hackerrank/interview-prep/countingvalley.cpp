#include<bits/stdc++.h> 

using namespace std;

int countingValleys(int n, string s) {
  int alt = 0; 
  int valley = 0;

  for(int i=0; i < n; i++){
    if(s.at(i) == 'U'){
      if(alt == -1){
        valley++;
      }
      alt++;
    }

    if(s.at(i) == 'D'){
      alt--;
    }
  }
  return valley;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";


    return 0;
}
