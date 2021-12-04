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

void AP_nth_term()
{
    int first_term,difference,n,nth_term;
    cout<< "enter first term of the sequence: ";
    cin>>first_term;
    cout<<"\n\nenter difference between the sequence: ";
    cin>>difference;
    cout<<"\n\nenter number of terms: ";
    cin>>n;

    nth_term = first_term + (n-1) * difference;
    cout<<"\n\nnth term in the sequence: "<<nth_term<<"\n\n";

    int iter = 0;
    int sum = 0;
    for (int i = first_term; i <= nth_term; i = i + difference)
    {
        n = 1;
        int term = i + (n-1) * difference;
        iter = iter + 1;
        n = n + 1;
        sum = sum + term;
        cout<< iter <<"term in the sequence: "<<term<<"\n\n";
    }


    cout << "sum of all terms of the sequence is : "<<sum <<"\n\n\n";
}

void GP_nth_term()
{
    float first_term,ratio,nth_term, n;
    cout<< "enter first term of the sequence: ";
    cin>>first_term;
    cout<<"\n\nenter ratio between the terms: ";
    cin>>ratio;
    cout<<"\n\nenter number of terms: ";
    cin>>n;

    nth_term = first_term * pow(ratio, n - 1);
    cout<<"\n\nnth term in the sequence: "<<nth_term<<"\n\n";
    double sum = 0;
    for(float i = 1.0; i <= n; i++)
    {
        float output = first_term * pow(ratio, i - 1);
        cout <<"\n"<<"term no :"<<i <<" "<<output;
        sum = sum + output;
    }

    cout << "\n\nsum of all terms of the sequence is : "<<sum <<"\n\n\n";
}
