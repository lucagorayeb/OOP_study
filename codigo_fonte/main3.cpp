//Introdução a classes 
// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.

#include <iostream>
using namespace std;

class GradeBook{ //Classe
public:
    //Função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void diplayMessage(){//Função-membro
        cout << "Welcome to the Grade Book!" << endl;
    }
};

int main(){
    GradeBook myGradeBook;
    myGradeBook.diplayMessage();
    return 0;
}