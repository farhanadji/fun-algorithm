/* Implement an algorithm to determine if a string has all unique characters */

#include <bits/stdc++.h>

using namespace std;

bool isUniqueChars(string s){
  if(s.length() > 128) return false;

  bool charset[128];
  for(int i=0; i<s.length(); i++){
    int temp = s.at(i);
    if(charset[temp]){
      return false;
    }
    charset[temp] = true;
  }
  return true;
}


int main(){
  string s;
  getline(cin, s);

  bool result = (isUniqueChars(s));
  string res;
  if(result){
    res = "true";
  }else{
    res = "false";
  }

  cout << "is character unique? >> " + res << endl;

}