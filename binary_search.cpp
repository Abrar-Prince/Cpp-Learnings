#include<iostream>
using namespace std;
void bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Length of arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
    bubbleSortAscending(arr,n);
    int target;
    int position=-1;
    cout<<"Enter target : ";
    cin>>target;
    int LB=0;
    int UB=n-1;
     for(int i = LB; i <= UB ;i++){
        int mid=(UB+LB)/2;
        if(arr[mid]==target){
            position=mid;
            break;
        }
        else if(target<arr[mid]){
            UB=mid-1;
        }
        else{
            LB=mid+1;
        }
     }
     if(position==-1){
        cout<<"Not Found";
     }
     else{
     cout<<position<<endl;
     }
return 0;
}