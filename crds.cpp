#include <iostream>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long long int n;
    cin>>n;
    long long int temp;
    temp=(n*(n+1))+(n*(n-1)/2);
    //3 * ((n * (n + 1))/2) - n;
    //(n*(n+1))+(n*(n-1)/2);
    cout<<temp%1000007<<endl;
  }
  return 0;
}
