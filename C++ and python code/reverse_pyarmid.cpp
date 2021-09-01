#include <iostream>
using namespace std;
int main()
{ 
    int rows=5;
    int spaces;
    spaces=(2*rows)-2;
    for (int i = 0; i < rows; i++)
    {   
        for(int j=0; j<spaces; j++){
            cout<<" ";
        }
        spaces=spaces+1;
        for (int j = rows; j > i; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }

    return 0;
}