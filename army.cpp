#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int j=0;j<t_case;j++){
    cout<<endl;
    int ng,nm;
    cin>>ng>>nm;
    int max_ng=0,max_nm=0;
    int i=0;
    while(i<ng){
      int x;
      cin>>x;
      if(max_ng<x){
        max_ng=x;
      }
      i++;
    }
    i=0;
    while(i<nm){
      int x;
      cin>>x;
      if(max_nm<x){
        max_nm=x;
      }
      i++;
    }
    if(max_ng>=max_nm){
      cout<<"Godzilla"<<endl;
    }
    else{
      cout<<"MechaGodzilla"<<endl;
    }
  }
}
