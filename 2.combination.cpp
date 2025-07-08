#include<iostream>
using namespace std;
int com(int x){
    int a=1;
    for(int i = 1; i <= x ; i++){
        a*=i;
    }
    return a;
}
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int y=n-r;
    int p =com(n);
    int q =com(r);
    int z =com(y);
    cout<<p/(q*z);
    return 0;
}
