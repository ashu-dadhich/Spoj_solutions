#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  while(cin>>a>>b>>c){
    if(a==0 && b==0 && c==0){
      break;
    }
    else{
      if(b*b==a*c){
        int temp,result;
        temp=b/a;
        result=c*temp;
        cout<<"GP "<<result<<endl;
      }
      else{
        int d,result;
        d=b-a;
        result=c+d;
        cout<<"AP "<<result<<endl;
      }
    }
  }
  return 0;
}
