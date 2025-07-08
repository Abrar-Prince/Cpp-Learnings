#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows : ";
    cin>>m;
    for(int i = 1 ;i <= m ; i++){
        for(int j = 1;j <=m ;j++){
            if(i==j||j==(m-i+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
}
        cout<<endl;
}
    return 0;
}