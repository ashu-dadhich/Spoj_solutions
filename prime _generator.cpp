#include <iostream>
#include <math.h>
using namespace std;

int prime_check(int k){
  int temp=sqrt(k)+1;
  if(k==1){
    return 0;
  }
  if(k==2){
    return 1;
  }
  for(int i=2;i<=temp;i++){
      if(k%i==0)
        return 0;
  }
  return 1;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++){
      if(prime_check(j)){
        cout<<j<<endl;
      }
    }
    cout<<endl;
  }
}
