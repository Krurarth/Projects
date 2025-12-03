#include<iostream>
int balance = 0;

void addMoney(int add);
void takeMoney(int take);
void showBalance();

int main(){
    int k , input , output ;

   do{ 

    std :: cout << "Enter the following number.\n";
    std :: cout << "1. Add money to your account.\n";
    std :: cout << "2. Take money from your account.\n";
    std :: cout << "3. how balance of your account.\n";
    std :: cout << "4. Exit ! .\n";
    std :: cin >> k;

    switch (k)
    {
    case 1: addMoney(input) ;           break;
    case 2: takeMoney(output) ;           break;
    case 3: showBalance() ;          break;
        
    }} while( k != 4) ;

    return 0;
}

void addMoney(int add){

    std :: cout<< "Pleace enter your money";
    std :: cin>>add;

    balance+=add;
    std :: cout<<add<<" is added to your account.";

}

void takeMoney(int take){

    std :: cout<< "Please enter the amount you want to widraw\n";
    std :: cin>> take;
    std :: cout<< take << " has been widrawn from youe account.\n";
    
    balance -= take;
}

void showBalance(){

    std :: cout << "Your total balance is " << balance << " /-\n";

}