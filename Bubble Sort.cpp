#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements";
    cin>> n ;
   int arr[n];
     for (int i=0;i<n;i++){
   cin>>arr[i];  }
cout<<endl;
for (int j=0;j<n;j++)
{
    cout<<arr[j]<<",";
}
for(int x=0;x<n-1;x++)
for(int y=0;y<n-x-1;y++){
    if(arr[y]>arr[y+1])
    swap(arr[y],arr[y+1]);
}

cout<<endl;
for (int a=0;a<n;a++)
{
    cout<<arr[a]<<",";

}}