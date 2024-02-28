#include<iostream>
using namespace std;
int main(){
    int arr[20],a,i,n;
    
    cout<<"enter  no of element in array";
cin>>a; 
 cout<<"enter the element";
    for(int i=0; i<a; i++) {
        cin>>arr[i];
    }
    arr[a-1]=arr[a-1];
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i];
    }
    
   
    //for(int i=0; i<a; ++i) cout<<arr[20];
    
return 0;

}