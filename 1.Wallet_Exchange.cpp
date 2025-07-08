#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1 ; i <= t; i++){
    int x,y;
    cin>>x>>y;
    int Z=x+y;
    if(Z%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
    }
return 0;
}
