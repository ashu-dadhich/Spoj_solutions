#include <iostream>
using namespace std;

int main(){
  int n_packets;
  while(cin>>n_packets){
    if(n_packets==-1){
      break;
    }
    else{
      int p_size[n_packets];
      int sum=0;
      for(int i=0;i<n_packets;i++){
        cin>>p_size[i];
        sum+=p_size[i];
      }
      int temp=sum/n_packets;
      if(sum%n_packets==0){
        int count=0;
        for(int i=0;i<n_packets;i++){
          if(p_size[i]-temp>0){
            count+=p_size[i]-temp;
          }
        }
        cout<<count<<endl;
      }
      else{
        cout<<"-1"<<endl;
      }
    }
  }
  return 0;
}
