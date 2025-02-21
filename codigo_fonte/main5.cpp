#include <iostream>
#include <string>
using namespace std;

//Definição de classe Grade Book 
class GradeBook{
    public: 
        //Função que configura o nome do curso
       void setCourseName(string name, string number)//set significa atribuir valores
       {
        courseName = number + name; //Armazena o nome do curso no objeto
       }

       //Função que obtém o nome do curso 
       string getCourseName(){//get significa obter valores
        return courseName;//Retorna o courseName do objeto  
       }

       //Função que exibe uma mensagem de boas vindas na tela
       void displayMessage(){
        //Essa instrução chama o getCourseName() para obter o 
        //nome do curso de que esse GradeBook representa
        cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
       }

       private: 
        string courseName;//nome do curso para esse GradeBook 
};

int main (){

    string nameOfCourse;//String de caracteres para armazenar o nome do curso 
    string numberOfCourse;
    GradeBook myGradeBook;//Cria um objeti GradeBook chamado myGradeBook

    //exibe o valor inicial de courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    //Solicita, insere econfigura o nome do curso 
    cout << "\nPlease enter the course name: " << endl;

    getline(cin,nameOfCourse);//Lê o nome do curso e os espaços em branco 

    cout << "\nPlease enter the course number: " << endl;

    getline(cin,numberOfCourse);

    myGradeBook.setCourseName(nameOfCourse,numberOfCourse);//Configura o nome do curso 

    cout << endl;// gera saída de uma linha em branco

    myGradeBook.displayMessage();// exibe a mensagem com o novo nome do curso

    return 0;
}
