#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    int n;
    cin>>n;
    int m[n],w[n];
    for(int j=0;j<n;j++){
      cin>>m[j];
    }
    for(int j=0;j<n;j++){
      cin>>w[j];
    }
    sort(m,m+n);
    sort(w,w+n);
    int sum=0;
    for(int j=0;j<n;j++){
      sum+=m[j]*w[j];
    }
    cout<<sum<<endl;
  }
  return 0;
}
