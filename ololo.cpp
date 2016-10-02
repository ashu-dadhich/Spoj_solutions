#include <iostream>
#include <map>

using namespace std;

int main(){
  long int t_case;
  cin>>t_case;
  std::map<long long int, long long int> map;
  for(long int i=0;i<t_case;i++){
    long long int n;
    cin>>n;
    if(map[n]>=1){
      map.erase(n);
    }
    else{
      map[n]=1;
    }
  }
  cout<<map.begin()->first<<endl;
  return 0;
}
