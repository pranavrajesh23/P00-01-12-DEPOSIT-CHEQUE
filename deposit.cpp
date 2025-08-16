#include<iostream>
using namespace std;

void transaction()
{
    cout << "\n--------Transaction--------\n";
    while(true)
    {
    cout<<"\nHas it been 7 days since you deposited the cheque? (yes/no): \n";
    string response;
    cin >> response;
    if (response == "yes") 
    {
        cout << "\nMoney transferred to receiver.\n";
        break;
    } 
    else
    {
        cout<<"\nIf you need the money before 7 days, then it needs a sender review.";
        cout<<"\nSender review? (yes/no): \n";
        string review;
        cin >> review;
        if(review=="yes")
        {
            cout<<"\nNow moving on to sender authorise\n";
            cout<<"\nSender authorise? (yes/no): \n";
            string auth;
            cin >> auth;
            if(auth=="yes")
            {
                cout<<"\nSender has authorised the cheque.\n";
                cout<<"\nMoney transferred to receiver.\n";
                break;
            }
            else
            {
                cout<<"\nSender has not authorised the cheque.\n";
                cout<<"\nInvalid Transaction.\n";
                break;
            }
        }
        else
        {
            cout<<"\nSender review says no, cheque is waiting in progress\n";
            cout<<"\nKidnly wait for 7 days.\n";
        }

    }
    }
}

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
    transaction();
}