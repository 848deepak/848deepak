#include <iostream>

using namespace std;

int main()

{

    unsigned int n, a[50], e, f = 0;

    cout << " How many elements you want to enter : ";

    cin >> n;

    cout << "\n Enter the elements \n";

    for (int i = 1; i <= n; i++)

        cin >> a[i];

    cout << "\n Enter the element you want to delete : ";

    cin >> e;

    for (int i = 1; i <= n; i++)

    {

        if (e == a[i])

        {

            for (int k = i; k < n; k++)

                a[k] = a[k + 1];

            f = 1;
        }
    }

    if (f == 1)

    {

        cout << "\n The elements after deleting one element are as \n";

        for (int i = 1; i < n; i++)

            cout << a[i] << "\n";
    }

    else

    {

        cout << "\n None of given element deleted \n\n Elements are as \n";

        for (int i = 1; i <= n; i++)

            cout << a[i] << "\t";
    }
    

    return 0;
}