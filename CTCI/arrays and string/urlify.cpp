//Write a method to replace all spaces in a string with '%20'.

#include<bits/stdc++.h>

using namespace std;

void urlify(string s){
  string n = s;
  int spaceCount = 0, index;
  int size = n.length();
  for(int i=0; i<size; i++){
    if(n[i] == ' '){
      spaceCount++;
    }
  }
  index = size + spaceCount * 2;
  int plus = size + spaceCount * 2;
  for(int i= size - 1; i>=0; i--){
    if(n[i] == ' '){
      n[index-1] = '0';
      n[index-2] = '2';
      n[index-3] = '%';
      index = index - 3;
    }else{
      n[index-1] = n[i];
      index--;
    }
  }
  cout << n; //not solved
}


int main(){
  string n;
  getline(cin, n);
  urlify(n);

  return 0;
}