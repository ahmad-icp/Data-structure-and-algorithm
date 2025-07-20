#include <iostream>
using namespace std;
int main()
{

int a,b;
cout << "Enter the number of rows and columns: ";
cin >> a >> b;

int matrix [a][b];
int rows =a;
int columns = b;


cout << "Enter the elements of the matrix:" << endl;

for(int i=0;i<rows;i++)
{
for ( int j=0;j<columns;j++)
cin>>matrix[i][j];




}




for(int i=0;i<rows;i++)
{
for ( int j=0;j<columns;j++)
     {   cout<< matrix[i][j];




}

cout <<endl;






}

return 0;



}




