#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long int target;
    int no_of_friends;
    cin>>target>>no_of_friends;
    long int stamp[no_of_friends];
    for(int j=0;j<no_of_friends;j++){
      cin>>stamp[j];
    }
    sort(stamp,stamp+no_of_friends);
    long int sum=0,count=0;
    for(int k=no_of_friends-1;k>=0;k--){
      if(sum>=target){
        break;
      }
      sum+=stamp[k];
      count+=1;
    }
    if(sum<target){
      cout<<"Scenario #"<<i+1<<":"<<endl;
      cout<<"impossible"<<endl;
      cout<<endl;
    }
    else{
      cout<<"Scenario #"<<i+1<<":"<<endl;
      cout<<count<<endl;
      cout<<endl;
    }
  }
}
