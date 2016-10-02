#include <iostream>
using namespace std;

int main(){
  long long int t_case;
  cin>>t_case;
  //cout<<endl;
  for(long long int i=0;i<t_case;i++){
    cout<<endl;
    long long int n;
    cin>>n;
    long long int sum=0;
    for(long long int j=0;j<n;j++){
      long long int x;
      cin>>x;
      sum+=x%n;
    }
    //cout<<sum<<endl;
    if(sum%n==0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
