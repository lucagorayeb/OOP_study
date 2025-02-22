#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double amount;//Quantia de depósito a cada ano
    double principal;//Quantia inicial antes dos juros 
    double rate;//Taxa de juros 
    int time;

    cout << "Principal: " << endl;
    cin >> principal;

    cout << "Rate (0.1=10% / 1=100%): " << endl;
    cin >> rate;

    cout << "Time (Years): " << endl;
    cin >> time;

    //exibe cabeçalhos
    cout << "Year" << setw(35) << "Amount on deposit" << endl;

    //Configurar o formato de número de ponto flutuante
    cout << fixed << setprecision(2);

    //calcula qauntia de depósito para cada um dez anos 
    for (int year = 1; year <= time; year++)
    {
        //Calcula nova quantia durante ano especificado 
        amount =  principal * pow(1.0 + rate, year);

        //Exibe o ano e a quantia
        cout << setw(4) << year << setw(21) << amount << endl;

    }
    return 0;
}