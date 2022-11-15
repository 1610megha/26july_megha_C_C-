//DEFINE A CLASS TO REPRESENT A BANK ACCOUNT. INCLUDE THE FOLLOWING MEMBERS: DATA MEMBERS: I. NAME OF THE DEPOSITOR II. ACCOUNT NUMBER III. TYPE OF ACCOUNT IV. BALANCE AMOUNT IN THE ACCOUNT MEMBER FUNCTIONS: 1. TO INPUT INITIAL VALUES 2. TO DEPOSIT AN AMOUNT 3. TO WITHDRAW AN AMOUNT AFTER CHECKING THE BALANCE 4. TO DISPLAY NAME AND BALANCE ALSO WRITE CONSTRUCTOR FOR THIS CLASS THAT TAKES FOUR ARGUMENTS. IT SHOULD ALSO HANDLE TYPE OF ACCOUNT AS SAVINGS BY DEFAULT
 
#include<iostream>
using namespace std;
class bank
{
    private:
        string name;
        long int accno;
        string acc_type ;
        long int balance;
    public:
        bank(){};
        bank(string n,long int ano ,long int bal,string sa)
        {
            name=n;
            accno=ano;
            balance=bal;
            acc_type = sa;
        }
        void setdata()
            {
                acc_type = "saving";
                cout<<"enter the name of account holder : "<<endl;
                cin>>name;
                cout<<"enter the account number of candidate : "<<endl;
                cin>>accno;
                cout<<"enter the balance : "<<endl;
                cin>>balance;
            }
        void check();
        void deposit();
        void display();

};

void bank :: deposit()
{
    long int amount;
    cout<<"how much money do you want to deposit : "<<endl;
    cin>>amount;
    balance=balance+amount;
}

void bank :: check()
{
    long int amnt;
        cout<<"how much money do you want to withdraw : "<<endl;
        cin>>amnt;
    if (balance>amnt)
    {
        balance=balance-amnt;
    }
    else
    cout<<"you have unsufficient balance that you cant withdraw money :"<<endl;
}

void bank :: display()
{
    cout<<"name of candidate is "<<name<<endl;
    cout<<"account no. :"<<accno<<endl;
    cout<<"account type : "<<acc_type<<endl;
    cout<<"total balance in your account is Rs. "<<balance<<endl;
}

int main()
{
    bank candidate;
    candidate.setdata();
    candidate.deposit();
    candidate.check();
    candidate.display();
}

