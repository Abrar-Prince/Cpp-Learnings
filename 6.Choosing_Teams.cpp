#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i = 0 ; i < n ; i++){
        if((arr[i]+k)<=5){
            count++;
        }
    }
    int Z=count/3;
    cout<<Z<<endl;
return 0;
}