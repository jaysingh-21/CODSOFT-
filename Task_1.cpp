# include <iostream>
# include <time.h>
using namespace std;
char ch= ' ';

int main(){
    top:
    system("cls");
    int rand_no;  // variable for storing random number
    int user_no;   // variable for storing number guess by user
   
    cout<< "\nWelcome to NUMBER GUESSING GAME" << endl;
    cout<<"Guess the number between 1-100" << endl;
   
    srand(time(NULL));
    rand_no = rand() % 100+1;
    while (true){
        cout<< "\nGuess the number : ";
        cin>> user_no ;

        if (user_no == rand_no){
            cout<< "You guess the correct number\n" ;
            break;
        }
        else if (user_no < rand_no){
            cout << "too low !, Try again " << endl;
        }
        else 
            cout<< "too high ! , try again" << endl;
    }
    cout<< "Do you wish no play again(y/n) : " ;
    cin>> ch;
    
    if (ch=='y'){
        goto top;
    }

    return 0;

}