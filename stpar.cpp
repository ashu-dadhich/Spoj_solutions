#include <iostream>
#include <stack>
using namespace std;

int main(){
  int n;
  while(cin>>n){
    if(n==0){
      break;
    }
    else{
      stack<int> lane;
      int need=1;
      bool state=true;
      int order[n];
      for(int i=0;i<n;i++){
        cin>>order[i];
      }
      for(int i=0;i<n;i++){
        while(!lane.empty() && lane.top()==need){
          lane.pop();
          need++;
        }
        if(order[i]==need){
          need++;
        }
        else if(!lane.empty() && order[i]>lane.top()){
          state=false;
          break;
        }
        else{
          lane.push(order[i]);
        }
      }
      if(state==false){
        cout<<"no"<<endl;
      }
      else{
        cout<<"yes"<<endl;
      }
    }
  }
  return 0;
}
