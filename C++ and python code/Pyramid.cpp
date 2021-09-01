#include <iostream>
using namespace std;
int main()
{
  int spaces, rows;
  /*cout<<"Enter number of rows: ";
  cin>>rows;*/
  rows = 5;
  spaces = (2 * rows) - 2;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < spaces; j++)
    {
      cout << " ";
    }
    spaces = spaces - 1;
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*"
           << " ";
    }
    cout << "\n";
  }
  return 0;
}