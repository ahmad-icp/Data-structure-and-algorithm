#include<iostream>
using namespace std;
#include<vector>

void printSUbset(vector<int> &v, vector<int> &ans, int i)
{
if (i ==v.size())
{for (int a: ans)
    cout << a << " ";
    cout << endl;
    return;
}

ans.push_back(v[i]);
printSUbset(v, ans, i+1);
ans.pop_back();
printSUbset(v, ans, i+1);
}








int main()
{
 vector<int> v;
 int n, x;
    cout << "Enter the number of elements: ";   
cin >> n;
    cout << "Enter the elements: "; 
int i = 0;
while ( i < n)
  { 
    cin >> x;
    v.push_back(x); 
    i++;
  }
 
   vector<int> ans;
   printSUbset(v, ans, 0);
    return 0;

}