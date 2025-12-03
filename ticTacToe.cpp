#include<iostream>
#include<ctime>
using namespace std;

void drawBoard(char * spaces );
void userInput (char *spaces , char userIP);
void compInput(char *spaces , char compIP);
bool checkWinner(char *spaces , char userIP , char compIP);
bool checkTie(char *spaces , char userIP , char compIP);

int main(){

char compIP = 'O';
char userIP = 'X';
char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
bool running = true ;

while (running){
    drawBoard(spaces);
    userInput(spaces , userIP);

    if (checkWinner(spaces , userIP , compIP)){
        running = false;
        break;
    }

    else if (checkTie(spaces , userIP , compIP)){
        running = false;
        break;
    }

    drawBoard(spaces);
    compInput(spaces , compIP);

    if (checkWinner(spaces , userIP , compIP)){
        running = false;
        break;
    }

     else if (checkTie(spaces , userIP , compIP)){
        running = false;
        break;
    }

}
    cout << '\n'<<"Thanks for playing !";

}

void drawBoard(char* space ){
    cout << '\n';
    cout << "     |     |     "<<'\n';
    cout << "  "<<space[0]<<"  |  "<<space[1]<<"  |  "<<space[2]<<"  "<<'\n';
    cout << "_____|_____|_____\n";
    cout << "     |     |     "<<'\n';
    cout << "  "<<space[3]<<"  |  "<<space[4]<<"  |  "<<space[5]<<"  "<<'\n';
    cout << "_____|_____|_____\n";
    cout << "     |     |     "<<'\n';
    cout << "  "<<space[6]<<"  |  "<<space[7]<<"  |  "<<space[8]<<"  "<<'\n';
    cout << "     |     |     \n";
    cout << '\n';
}
void userInput(char *spaces , char userIP){

   int number ;
   cout << "Enter a number between 1 - 9 : ";
   cin >> number;

   number-- ;
   do{
        if (spaces[number] == ' '){
            spaces[number] = userIP ;
            break;
        }
   } while( number < 0 || number > 9 );

}
void compInput(char *spaces, char compIP){

    while (true)
    {srand(time(0)); 
    int number = rand() % 9;
    if (spaces[number] == ' '){
        spaces[number] = compIP;
        break;
        }}

}
bool checkWinner(char *spaces , char userIP , char compIP){

    if (spaces[0]!=' ' && spaces[1] == spaces[2] && spaces[2] == spaces[3]){
        spaces[0] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[3]!=' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[6]!=' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[0]!=' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[1]!=' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[2]!=' ' && spaces[2] == spaces[5] && spaces[5] == spaces[9]){
        spaces[2] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[0]!=' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    if (spaces[2]!=' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == userIP ? cout<< "YOU WIN !" : cout<<"YOU LOSE !";
        return true;
    }
    return false;
}
bool checkTie(char *spaces , char userIP , char compIP){

    for (int i=0 ; i < 9 ; i++ ) {

        if (spaces[i] != ' '){
            return false;
        }
     }
     cout << "IT'S A TIE !\n";
return true;
}
