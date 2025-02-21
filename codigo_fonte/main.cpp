#include <iostream> 
using namespace std;


int main() {
    double num1, num2, soma;

    // Solicita os números ao usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    // Realiza a soma
    soma = num1 + num2;

    // Exibe o resultado
    cout << "A soma de " << num1 << " e " << num2 << " é: " << soma << endl;

    return 0;
}
