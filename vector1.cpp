#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<char> v;
   int n;
    char x;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        v.push_back(x);
    }
    cout << "The elements are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}