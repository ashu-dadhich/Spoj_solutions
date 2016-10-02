#include <iostream>
using namespace std;

int main(){
  long long int t_case;
  cin>>t_case;
  for(long long int i=0;i<t_case;i++){
    long long int n;
    cin>>n;
    long long int ans;
    ans=n*(n+2)*(2*n+1)/8;
    cout<<ans<<endl;
  }
  return 0;
}
