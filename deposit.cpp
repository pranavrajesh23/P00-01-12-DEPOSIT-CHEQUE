#include<iostream>
using namespace std;

void cheque()
{
    cout << "\n--------Cheque--------\n";
    cout<<"\nInserting cheque into machine\n";
    cout<<"\nEnter the amount of cheque: \n";
    double amt;
    cin >> amt;
    cout<<"\nEnter sender's account number: \n";
    int acc;
    cin >> acc;
    cout << "\nCheque Amount: " << amt << endl;
    cout << "\nSender's Account Number: " << acc << endl;
    cout<<"\nYour cheque is ready and it will be refelected in 7 days.\n";

}

void credentials()
{
    cout<<"\n--------Credentials--------\n";
    cout<<"\nInsert bank card to machine\n";
    cout <<"\nEnter your account number: \n";
    string acc;
    cin >> acc;
    cout<<"\nEnter Receiver's account number: \n";
    string rec;
    cin >> rec; 
    cout << "\nAccount Number: " << acc << endl;
    cout << "\nReceiver's Account Number: " << rec<< endl;
}

int main()
{
    cout<<"\n--------Deposit Cheque--------\n";
    credentials();
    cheque();
    // transaction();
}