/*
/ STAR Pattern
 


      *      
    * * *        
  * * * * *       
* * * * * * *      
* * * * * * *      
  * * * * *
    * * *        
      *      

   
   *      
  ***        
 *****       
*******      
*******      
 *****
  ***        
   *      

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = i + 1; j < n; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
        else
        {
 
                for (int j = 0; j < i; j++)
                {
                    cout << "  ";
                }
                for (int j = 0; j < 2 * (n - i) - 1; j++)
                {
                    cout << "* ";
                }
                cout << "\n";
        }
    }
    return 0;
}