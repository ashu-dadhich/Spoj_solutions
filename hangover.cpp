#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  double x;
  while(cin>>x){
    if(x==0.00){
      break;
    }
    else{
      int i=2.00;
      int count=0;
      double sum=0.00;
      while(1){
        if(sum>=x){
          break;
        }
        double temp;
        temp=1/i;
        sum+=temp;
        count++;
        i++;
        cout<<temp<<endl;
      }
      cout<<count<<" card(s)"<<endl;
    }
  }
}
