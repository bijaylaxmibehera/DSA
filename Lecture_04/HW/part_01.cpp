/*
1 
2 3
3 4 5 
4 5 6 7
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
           cout<<col+row-1<<" ";
           col++;
        }
        cout<<endl;
        row++;
        
    }
    
    return 0;
}
