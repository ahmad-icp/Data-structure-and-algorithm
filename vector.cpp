#include <iostream>
using namespace std;
#include <vector>
int main()
{vector<int> v;
  int n, x;
  cout << "Enter the number of elements: ";
  cin >> n;
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++)
  { cin >> x;
    v.push_back(x);
  }
  cout << "The elements in reverse order are: ";
  for (int i = n - 1; i >= 0; i--)
    cout << v[i] << " ";
  return 0;














}



