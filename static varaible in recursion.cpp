#include<iostream>
using namespace std;
int fun(int n)
{
    static int x =0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
}


int main()
{
    int a = 5;
    cout << fun(a) << endl; // Output will be 21
    return 0;
}