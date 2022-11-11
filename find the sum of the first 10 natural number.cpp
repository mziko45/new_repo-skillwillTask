/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,  sum = 0;
    
    cout << "find the sum of the first 10 number" <<endl;
    cout << "------------------------------------" <<endl;
    cout << "the natural numbers are:" <<endl;
     
    for ( i = 1 ; i <= 10 ; i++ ) {
        cout <<i << " " ;
        sum = sum + i ;
    } 
    cout <<" \n the sum of the first 10 numbers are:" <<sum <<endl;
 
    return 0;
}
