#include <iostream>

#define temp 0
#define nil -1
#define infi 999

using namespace std;

int n,
int adj[100][100];
int path_lenght[100];
int status[100];
int predecessor[100];
int edges;

int main(){
  cout<<"Enter number of vertices"<<endl;
  cin>>n;
  cout<<"Enter number of edges:"<<endl;
  cin>>edges;
//create graph
  for(int i=0;i<edges;i++){
    cout<<"Enter starting and ending vertex"<<endl;
    int origin,destination;
    cin>>origin>>destination;
    int weight;
    cout<<"Enter weight of the edge:"<<endl;
    cin>>weight;
    adj[origin][destination]=weight;
  }
//apply dij
  for(int i=0;i<n;i++){
    status[i]=temp;
    predecessor[i]=nil;
    path_lenght[i]=infi;
  }
  path_lenght[0]=0;
  while(1){
    int min=infi;
    int current;
    for(int i=0;i<n;i++){
      if(min>=path_lenght[i]){
        min=path_lenght[i];
        current=i;
      }
    }
    if(current==)

  }

}
