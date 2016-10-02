#include <iostream>
using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    int a,b;
    cin>>a>>b;
    if(a==b){
      if(a==0){
        cout<<"0"<<endl;
        continue;
      }
      int temp=1;
      int counter=1;
      for(int j=1;j<a;j++){
        if(j%2==0){
          counter=1;
        }
        else{
          counter=3;
        }
        temp+=counter;
      }
      cout<<temp<<endl;
    }
    else if(a-b==2){
      int i=0;
      int temp=2;
      int counter=1;
      for(int j=2;j<a;j++){
        if(i%2==0){
          counter=1;
        }
        else{
          counter=3;
        }
        temp+=counter;
        i++;
      }
      cout<<temp<<endl;
    }
    else{
      cout<<"No Number"<<endl;
    }
  }
  return 0;
}
