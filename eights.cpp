#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int c=250;
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long long int k;
    cin>>k;
    if(k==1){
      cout<<"192"<<endl;
    }
    else{
      long long int num=192;
      for(long long int j=1;j<k;j++){
        num+=c;
        //cout<<num<<endl;
      }
      cout<<num<<endl;
    }
  }
  return 0;
}
