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
    int n;
    cin>>n;
    for(int i = 0 ; i <= n ;i++){
        for(int j = 0 ; j <=n-i-1;j++){
            cout<<"  "; 
        }
        for(int j = 0; j <= i ;j++){
            int x=com(i);
            int y=com(j);
            int z=com(i-j);
            cout<<x/(y*z)<<"   ";
        }
        cout<<endl;
    }
  return 0;  
}