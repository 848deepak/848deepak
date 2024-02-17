#include <iostream>
using namespace std;
int main()
{
    float marks1,marks2,marks3,marks4,marks5;
    //float marks2;
    //float marks3;
   // float marks4;
   // float marks5;
    cout << "Enter marks of subject 1:";
    cin >> marks1;
    cout << "Enter marks of subject 2:";
    cin >> marks2;
    cout << "Enter marks of subject 3:";
    cin >> marks3;
    cout << "Enter marks of subject 4:";
    cin >> marks4;
    cout << "Enter marks of subject 5:";
    cin >> marks5;
    cout << "Average of marks are:" << (marks1 + marks2 + marks3 + marks4 + marks5) / 5 << endl;
    return 0;
}
