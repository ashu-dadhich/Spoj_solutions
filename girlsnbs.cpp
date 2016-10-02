#include <iostream>

using namespace std;

int main(){
  int b,g;
  while(1){
    cin>>g>>b;
    if(g==-1 && b==-1){
      break;
    }
    else{
      if(g==0 && b==0){
        cout<<"0"<<endl;
      }
      else if(g>b){
        if(b==0){
          cout<<g<<endl;
        }
        else{
          int temp=g/(b+1);
          if(b==1 && g%(b+1)==0){
            cout<<temp<<endl;
          }
          else{
            cout<<temp+1<<endl;
          }
        }
      }
      else if(b>g){
        if(g==0 ){
          cout<<b<<endl;
        }
        else{
          int temp=b/(g+1);
          if(g==1 && b%(g+1)==0){
            cout<<temp<<endl;
          }
          else{
            cout<<temp+1<<endl;
          }
        }
      }
      else{
        cout<<'1'<<endl;
      }
    }
  }
  return 0;
}
