#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
      if(n==0){
        break;
      }
      else{
        long long int temp=n*(n+1)*(2*n+1)/6;
        cout<<temp<<endl;
      }
    }
    return 0;
}
