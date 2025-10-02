#include<iostream>
using namespace std;
int main()
{int m,n;
    cout <<"enter number of rows";
    cin>>m;
    cout<<"enter number of columns";
    cin>>n;
    int arr[m][n]={{}};
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
int a,b;
    cout <<"enter number of rows";
    cin>>a;
    cout<<"enter number of columns";
    cin>>b;
    int arr1[a][b]={{}};
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr1[i][j];
        }
    }
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
int sumOfArrays[i][j]=arr[i][j]+arr1[i][j];
        cout<<sumOfArrays[i][j]<<" ";
    }}