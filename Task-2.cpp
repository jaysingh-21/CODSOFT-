#include <iostream>
#include<math.h>
using namespace std;


int main(){
    top:
    system("cls");
    int num1, num2, choice;
    int sum, sub, mult, div;
    char wish;
    cout<<"1. Addition" <<endl;
    cout<<"2. Subtraction" << endl;
    cout<<"3. Multiplication" << endl;
    cout<<"4. Division" << endl;

    cout<<"\n Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
   
            cout<<"Enter first number: ";
            cin>> num1;
            cout<<"Enter second number: ";
            cin>> num2;

            sum=num1+num2;
            cout<<"The sum is "<<sum;
            break;
        
        case 2:
            cout<<"Enter first number: ";
            cin>> num1;
            cout<<"Enter second number: ";
            cin>> num2;

            sub=num1-num2;
            cout <<"The difference is "<<sub;
            break;

        case 3:
            cout<<"Enter first number: ";
            cin>> num1;
            cout<<"Enter second number: ";
            cin>> num2;

            mult=num1*num2;
            cout<<"The product is "<< mult;
            break;  
        case 4:
            cout<<"Enter first number: ";
            cin>> num1;
            cout<<"Enter second number: ";
            cin>> num2;
            if (num2==0){
                cout <<"The is not divisible by Zero"<< endl;
                break;
            }
            div=num1 / num2;
            cout<< "The quotient is "<< div << endl;
            break;       

        default:
            cout<< "Ivalid choice" ;
    }
    cout << endl;
    cout << "\nDo you wish to continue more operation (y/n) : ";
    cin >>wish;
    if (wish== 'y')
        goto top;


    return 0;
}


