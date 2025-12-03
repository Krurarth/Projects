#include<iostream>
using namespace std;

int getDigit(int digit);
int sumOdd(string number);
int sumEven(string number);

int main() {

    string number ;
    cout << "Enter you're credit card number : ";
    getline(cin , number);

    int result = sumOdd( number) + sumEven( number) ;
    
    if ((result%10) == 0){
        cout<< '\n' << "You're number is valid .";
    }
    else{
        cout<< '\n' << "You're number is not valid .";
    }

    return 0;
}

int getDigit(int digit){
    int sum=0;
    sum = digit % 10 + (digit/10 ) % 10;
    return sum;
}
int sumOdd(string number){
    int sum = 0;
    for(int i = number.size() - 1 ; i>=0 ; i-=2 ){
        sum = (number[i]-'0')+ sum;
    }
    return sum;
}
int sumEven(string number){

    int sum = 0;
    for(int i = number.size() - 2 ; i>=0 ; i-=2 ){
        sum = getDigit((number[i]-'0')*2) + sum;
    }
    return sum;
}