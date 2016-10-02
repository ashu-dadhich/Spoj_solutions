#include <iostream>
#include <map>

using namespace std;

int main(){
  long long int n;
  cin>>n;
  int flag=0;
  std::map<long long int, long long int> map;
  map[20]=1;
  map[4]=1;
  map[16]=1;
  map[37]=1;
  map[58]=1;
  map[89]=1;
  map[145]=1;
  map[42]=1;
  int count=0;
  //int i=4;
  while(1){
    long long int temp=0;
    do {
      int digit = n % 10;
      temp+=digit*digit;
      n /= 10;
    } while (n > 0);
    count++;
    if(map[temp]==1){
      flag=1;
      break;
    }
    else if(temp==1){
      break;
    }
//    cout<<temp<<endl;
//    i--;
    n=temp;
  }
  if(flag==1){
    cout<<"-1"<<endl;
  }
  else{
    cout<<count<<endl;
  }
}
