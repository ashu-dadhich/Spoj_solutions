#include <iostream>

using namespace std;

int main(){
  int n_len;
  while(cin>>n_len){
    if(n_len==0){
      break;
    }
    else{
      int num[n_len];
      for(int i=0;i<n_len;i++){
        cin>>num[i];
      }
      int count=0;
      for(int i=0;i<n_len;i++){
        if(i+1==num[num[i]-1]){
          count+=1;
        }
        else{
          break;
        }
      }
      if(count==n_len){
        cout<<"ambiguous"<<endl;
      }
      else{
        cout<<"not ambiguous"<<endl;
      }
    }
  }
  return 0;
}
