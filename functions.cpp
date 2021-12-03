#include <iostream>
#include "functions.h"

using namespace std;

void summation()
{
    int output;
    int nth_term;
    cout<<"Enter number till you want calculate summation of two\'s power"<<endl;
    cin>>nth_term;
    output = pow(2, nth_term + 1) - 1;

    cout<<"Summation till nth_term is : "<< output << "\n\n" << "terms which were added\n";
    for (int i = 0; i <= nth_term; i++)
    {
        int term = pow(2, i);
        cout << term << " ";
    }
    cout << "\n";
}
