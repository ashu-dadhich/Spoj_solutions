#include <iostream>
#include <algorithm>

using namespace std;

int cow_fun(long long int distance,int cows,long long int position[],int n){
  long long int last_position=position[0];
  int cows_number=1;
  for(int i=1;i<n;i++){
    if(position[i]-last_position>=distance){
      cows_number++;
      if(cows_number==cows){
        return 1;
      }
    }
    last_position=position[i];
  }
  return 0;
}

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    int n,c;
    cin>>n>>c;
    long long int position[n];
    for(int j=0;j<n;j++){
      cin>>position[j];
    }
    sort(position,position+n);
    // for(int j=0;j<n;j++){
    //   cout<<position[j];
    // }
    long long int start=0;
    long long int end=position[n-1]-position[0];
    while(start+1<end){
      int mid=(start+end)/2;
      if(cow_fun(mid,c,position,n)){
        start=mid;
      }
      else{
        end=mid;
      }
    }
    cout<<start<<endl;
  }
  return 0;
}
