#include <iostream> 
using namespace std;
int fun(int n)
{ if (n> 0)
    {
        cout << n << endl;
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    int a;
    cout << "Enter a non-negative integer: ";
    cin >> a;
    fun(a);
    return 0;
}