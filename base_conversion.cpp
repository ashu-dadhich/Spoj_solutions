#include <iostream>

using namespace std;

void convert(int num,int base){
  int rem=num%base;
  if(num==0){
    return;
  }
  convert(num/base,base);
  cout<<rem;
}

int main(){
  int num, base;
  cin>>num>>base;
  convert(num,base);
}
