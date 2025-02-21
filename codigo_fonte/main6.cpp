#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    public:
        //O construtor inicializa courseName com a string fornecida como argumento
        GradeBook(string name){
            setCourseName(name);//Chama a função set para inicializar course name
        }

        //Função para configurar o nome do curso 
        void setCourseName(string name){
            courseName = name; //Armazena o nome do curso no objeto
        }

        //Função para obter o nome do curso 
        string getCourseName(){
            return courseName; //Retorna courseName do objeto
        }

        void displayMessage(){

            //Chama getCourseName para obter o courseName
            cout << "Wellcome to the grade book for " << getCourseName() << "!" << endl;
        }

        private:
            string courseName;//Nome do curso para esse grade book
};


int main(){

    //Cria dois objetos grade book 
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2( "CS102 Data Structures in C++" );

    //Exibe o valor inicial de course name para GradeBook
    cout << "GradeBook1 created for course: " << gradeBook1.getCourseName() << "\nGradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    return 0;
}

