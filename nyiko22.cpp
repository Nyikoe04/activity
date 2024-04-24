#include <iostream>

using namespace std;

int main() {
    char choice;
    double num2, num3;
    do {
        cout << "Enter first number: ";
        cin >> num2;

        cout << "Enter second number: ";
        cin >> num3;

        cout << "Arithmetic Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;

     }

     while(choice == 'y'|| choice == 'Y');
     cout<< "Exit the program"<< endl;

    return 0;


       switch(choice){
         case 1:
          cout<<"Result:" << "num2 + num3" <<endl;
          break;

           case 2:
          cout<<"Result:" << "num2 - num3" <<endl;
          break;

           case 3:
          cout<<"Result:" << "num2 * num3" <<endl;
          break;

           case 4:
            if(num2 ==0){
              cout<<"Result:" << "The second integer is zero ,divide by zero."<<endl;
        }
        else{
            cout<<"Result:"<< num2/num3 <<endl;

        }
        break;
           default:
            cout <<"invalid choice try another one."<< endl;
        }

}

