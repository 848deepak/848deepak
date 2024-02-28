
/*#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    cout<<"element not found "; 
}

int main() {
    int arr[50],i;
    cout<<"enter the elemet";
    for(i=1;i<=5;i++)
    cin>>arr[i];
   // int arr[] = {5, 2, 4, 7, 1, 9, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
   // int target = arr; 

    int index = linearSearch(arr, size, arr[i]);

    if (index !=arr[i]){
        cout << "Element " << arr[i] << " found at index " << index << endl;
    } else {
        cout << "Element " << arr[i] << " not found in the array." << endl;
    }

    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, item, c, loc;
    cout << "Enter the size of an array:";
    cin >> n;
    cout << "The elemets are:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element you want to search";
    cin >> item;
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            c = 1;
            loc = i;
        }
        else
        {
        }
    }
    if (c == 1)
    {
        cout << "Number found at position: " << loc + 1;
    }
    else
    {
        cout << "Number is not in the list";
    }
    return 0;
}