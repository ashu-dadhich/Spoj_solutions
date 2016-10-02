#include <iostream>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  int flag=1;
  while(n>1){
    if(n%2==0){
      n=n/2;
      flag=1;
    }
    else{
      flag=0;
      if(n==3){
        break;
      }
      n=3*n+3;
    }
  }
  if(flag==1){
    cout<<"TAK"<<endl;
  }
  else{
    cout<<"NIE"<<endl;
  }
  return 0;
}
