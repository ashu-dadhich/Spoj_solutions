#include <iostream>
#include <stack>
using namespace std;

int adj[10000][10000];
int n;
int e;
int state[10000];

int main(){
    int flag=0;
    cin>>n>>e;
//    cout<<adj[0][0]<<" "<<state[0]<<endl;
    for(int k=0;k<e;k++){
        int i,j;
        cin>>i>>j;
        adj[i-1][j-1]=1;
        adj[j-1][i-1]=1;
//        cout<<k<<" "<<e<<endl;
    }
//    cout<<'*'<<endl;
    if(e>=n){
      cout<<"NO"<<endl;
      return 0;
    }
    for(int i=0;i<n;i++){
        state[i]=1;//1==initial
    }
//    cout<<'*'<<endl;
//    for(int v=0;v<n;v++){
        int v=0;
        stack<int> mystack;
        stack<int> temp;
        mystack.push(v);
        while(!mystack.empty()){
//            cout<<mystack.size()<<" "<<v<<endl;
            mystack.pop();
            if(state[v]==0){
                state[v]=2;//2=visited
                temp.push(v);
            }
            for(int i=n-1;i>=0;i--){
                if(adj[v][i]==1 && state[i]==0){
                    mystack.push(i);
                }
            }
        }
        if(temp.size()==n+1){
          flag=1;
        }
//    }
    if(flag==0 && e==n-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
