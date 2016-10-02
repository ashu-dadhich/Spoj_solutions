#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int palindrom_checker(long long int n){
  ostringstream ostr;
  ostr<<n;
  string s=ostr.str();
  string temp;
  temp=s;
  reverse(temp.begin(),temp.end());
  if(temp==s){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int cases;
  cin>>cases;
  for(int i=0;i<cases;i++){
    long long int num;
    cin>>num;
    while(1){
      num++;
      if(palindrom_checker(num)){
        cout<<num<<endl;
        break;
      }
    }
  }
  return 0;
}
