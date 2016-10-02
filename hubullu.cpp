#include <iostream>

using namespace std;

int main(){
  int t_case;
  cin>>t_case;
  for(int i=0;i<t_case;i++){
    long long int n;
    int player;
    cin>>n>>player;
    if(player==0){
      cout<<"Airborne wins."<<endl;
    }
    else{
      cout<<"Pagfloyd wins."<<endl;
    }
  }
  return 0;
}
