
/*#include<iostream>
using namespace std;
int main(){
    int arr[5],a;
    cout<<"enter the no";
    for(int i=0; i<a; i++) cin>>a;12
    cout<<"enter the element";
    for(int i=0; i<a; ++i) cout<<arr[5];
    
return 0;

}*/

#include<iostream>
using namespace std;
int main(){
    unsigned int n,a[50],e,p,f=0;
    cout<<"how many elements dp u want to enter";
    cin>>n;
    cout<<"enter the elements ";
    for(int i=1;i<=n;i++)
    {
        if (e==a[i])
        {
            for (int k=i; k<n;k++)
           // a[k]=a[k+1];
           cin>>a[i];
           
            
        }
    }
    cin>>a[i];
    
    cin>>e;
    cout<<"enter the elements to be inserted ";
    cin>>p;
    for(int k=n;k>=p;k--)
    a[k+1]=a[k];
    a[p]=e;
    cout<<"the element";
    for(int i=1;i<n+1;i++)
    cout<<a[i];
    return 0;
    

}
/*

#include<iostream>
using namespace std;
int main(){
    unsigned int n,a[50],e,p;
    cout<<"how many elements dp u want to enter";
    cin>>n;
    cout<<"enter the elements ";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"enter the element you want to place ";
    cin>>e;
    cout<<"enter the elements to be inserted ";
    cin>>p;
    for(int k=n;k>=p;k--)
    a[k+1]=a[k];
    a[p]=e;
    cout<<"the element";
    for(int i=1;i<n+1;i++)
    cout<<a[i];
    return 0;
    

}
*/