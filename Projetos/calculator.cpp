#include <iostream>
#include <string>
using namespace std;

class Calculator
{
    public:

        Calculator(){
        }

        void Result(){
            cout << "Type a number: " << endl;
            cin >> n1;

            cout << "Operation: " << endl;
            cin >> operation;

            cout << "Type a number: " << endl;
            cin >> n2;

            cout << "\n";

            if (operation=="Addition"){

                result=n1+n2;
                cout << n1 << " + " << n2 << " = " << result;

            }else if(operation=="Subtraction"){

                result=n1-n2;
                cout << n1 << " - " << n2 << " = " << result;

            } else if(operation=="Division"){

                result=n1/n2;
                cout << n1 << " / " << n2 << " = " << result;

            }else if(operation=="Multiplication"){

                result=n1*n2;
                cout << n1 << " x " << n2 << " = " << result;

            }else{

                cout << "ERRO" << endl;

            }
        }


    private:
        string operation;
        double result;
        double n1; 
        double n2;
};

int main(){
    Calculator myCalculator;
    myCalculator.Result();
    return 0;
}