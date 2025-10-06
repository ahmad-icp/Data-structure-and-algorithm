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

for(int i=0;i<n=1;i++)
{
  int small=i;
  for(int j = i+1; j<n; j++)
  {
      if(arr[j]<arr[small])
      {
          small=j;
      }
  }swap(arr[i], arr[small]);

}
for (int j=0;j<n;j++)
{
    cout<<arr[j]<<",";
    







}