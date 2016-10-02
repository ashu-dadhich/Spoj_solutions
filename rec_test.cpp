#include <iostream>
#include <stdio.h>

using namespace std;
int rseries(int n);

main(){
  int n,x;
  printf("Enter number of terms:");
  scanf("%d",&n );
  x=rseries(n);
  cout<<x;
}

int rseries(int n){
  int sum;
  if(n==0){
    return 0;
  }
  return (n+rseries(n-1));

}
