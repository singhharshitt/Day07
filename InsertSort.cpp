
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Insertion sorting: ";
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
