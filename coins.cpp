#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
map<int,int> mymap;

long long int fun(long long int n){
long long int a;
  if(n==0){
    return 0;
  }
  a=mymap[n];
  if(a==0){
    a=max(n,fun(n/2)+fun(n/3)+fun(n/4));
    mymap[n]=a;
  }
  return a;
}

int main(){
  long long int num;
  while(cin>>num){
    long long int result=fun(num);
    cout<<result<<endl;
  }
  return 0;
}
