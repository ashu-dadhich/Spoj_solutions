#include <iostream>
using namespace std;

int main(){
  int l;
  while(cin>>l){
    if(l==0){
      break;
    }
    else{
      double pi = 3.1415926534;
      double ans=(l*l)/(2*pi);
      cout.precision(2);
      cout<<fixed<<ans<<endl;
    }
  }
  return 0;
}
