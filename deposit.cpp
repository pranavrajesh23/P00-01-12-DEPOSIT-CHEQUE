#include<iostream>
using namespace std;

void credentials()
{
    cout<<"\nInsert bank card to machine\n";
    cout <<"\nEnter your account number: \n";
    string acc;
    cin >> acc;
    cout << "\nAccount Number: " << acc << endl;
    cout<<"\nEnter Receiver's account number: \n";
    string rec;
    cin >> rec; 
    cout << "\nReceiver's Account Number: " << rec<< endl;
}

int main()
{
    cout<<"\n--------Deposit Cheque--------\n";
    credentials();
    // cheque();
    // transaction();
}