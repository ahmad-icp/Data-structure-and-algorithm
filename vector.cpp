#include <iostream>
using namespace std;
#include <vector>
int main()
{vector<int> v;
  int n, x;
  cout << "Enter the number of elements: ";
  cin >> n;
  cout << "Enter the elements: ";int i = 0;
while ( i < n)
  { cin >> x;
    v.push_back(x); i++;
  }
  cout << "elements: ";
  for (int i = 0; i < n; i++)
    cout << v[i] << " ";
  return 0;
}   














