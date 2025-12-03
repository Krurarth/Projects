#include<iostream>
#include<ctime>
using namespace std;


int main(){

srand(time(0));
string g , h ; 
string name;
int n, m;

cout<<"Please Enter you're name : ";
getline(cin,name);

do
{
 n = rand()%3+1;


switch (n)
        {
        case 1 : g = "Stone";
            break;

        case 2 : g = "paper";
            break;

        case 3 : g = "seaser";
            break;
        }

         cout<<"*********************\n";
         cout<<"Chose you're number...";
         cout<<'\n';
         cout<<"Enter\n"<<"1. Stone\n"<<"2. Paper\n"<<"3. Seaser\n"<<"4. Exit\n";
         
         cin>> m;

         
         if(m<0 || m>4){
           cout<<"Pleas enter valid input.\n";
           continue;
         }

    switch (m)
        {
        case 1 : h = "Stone";
            break;

        case 2 : h = "paper";
            break;

        case 3 : h = "seaser";
            break;
        }

         cout<<"I(Computer) chosee-> "<< g<<'\n' ;
         cout<<"You chosee-> "<< h<<'\n' ;


        if(m == n){
                 cout<<"Oops! We tied.\n";
                 continue;
                }

        if(n == 1 && m == 2 || n == 2 && m == 3 || n == 3 && m == 1){
            cout << "Congrats ! " << name << "."<<'\n'<<"You win this game...\n\n\n";
        }

        else{
            cout<< "Yeah ! I(Computer) win...\n\n\n";
        }
         cout<<"*********************\n";
}       
            while(m != 4);

            cout<<"It was fun playing with you.\n"<<"Hope you enjoyed it.\n";
             cout<<"*********************\n";

             return 0;

}

