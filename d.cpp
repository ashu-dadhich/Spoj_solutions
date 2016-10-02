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
    for(int i=0;i<e;i++){
        int i,j;
        cin>>i>>j;
        adj[i][j]=1;
        adj[j][i]=1;
    }
    for(int i=0;i<n;i++){
        state[i]=0;//0==initial
    }
    for(int v=0;v<n;v++){
        stack<int> mystack;
        stack<int> temp;
        mystack.push(v);
        while(!mystack.empty()){
            mystack.pop();
            if(state[v]==0){
                state[v]=1;//1=visited
                temp.push(v);
            }
            for(int i=n-1;i>=0;i--){
                if(adj[v][i]==1 && state[i]==0){
                    mystack.push(i);
                }
            }
        }
        if(temp.size()==n){
          flag=1;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
