//Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.

#include<bits/stdc++.h>

using namespace std;

bool permutation(string s, string t){
  if(s.length() != t.length()){
    return false;
  }

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  for(int i=0; i < s.length(); i++){
    if(s[i] != t[i]){
      return false;
    }
  }
  return true;
}

int main(){
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);

  if(permutation(s1,s2)){
    cout << "PERMUTATION";
  }else{
    cout << "NOT PERMUTATION";
  }

  return 0;
}