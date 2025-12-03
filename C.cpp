#include<iostream>
#include<ctime>
using namespace std;

int main(){

    srand(time(0));

    int num;
    int guess;
    int tries=1;
    char grade;

    num = rand() % 100 + 1;
    
    cout<<"******* WEKCOME TO NIUMBER GUESSING GAME ********\n";
    cout<<"Guess the number from 0 to 100-->";
    
    do {   cin>>guess ;
       if(num !=guess )
        { num > guess ? cout<<"Go for higher one!\n" : 
                        cout<<"Go for lower one!\n";
                            tries ++;} 
                                        } while(guess != num);

    cout<<"Exelent... You win.\n" ;
    cout<<"You took total of "<<tries<<" tries."<<endl; 

    cout<<"**********************************";
    return 0;
}