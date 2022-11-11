/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, i, sum = 0 ;
    cout << "\n\n display n terms of the natural numbers and there sum: \n";
    cout <<"----------------------------------------------" <<endl;
    cout << "input number of terms:" ;
    cin >> n ;
    cout <<"the natural numbers upto" <<n << "th terms are: \n" ;
    for ( i = 1; i <= 10 ; i ++) {
        cout << i << "  " ;
        sum = sum + i ;
        
    }
     
     cout <<"\n the sum of the natural numbers are: " <<sum <<endl;
     
    return 0;
}
