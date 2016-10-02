#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    long int num;
    cin>>num;
    int count=0;
    for(long int j=5;j<=num;j+=5){
      long int temp;
      temp=j;
      while(temp%5==0){
        if(temp%5==0){
          count++;
        }
        temp=temp/5;
        if(temp==0)
          break;
      }
    }
    cout<<count<<endl;
  }
}
