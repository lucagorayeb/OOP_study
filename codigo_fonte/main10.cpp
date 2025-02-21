#include <iostream>
#include <string>
using namespace std;

class GradeBook{
    public:
        GradeBook (string name){
            setCourseName(name);
        }
        
        void setCourseName(string name){
            if (name.length()<=25){
                courseName =  name;
            }
            
             if (name.length()>25){//(length) É uma função-menbro da classe String da C++ Standard Library que retrona o número de caracteres em um objeto string.
             
                courseName =  name.substr(0,25);
                //Configura com os primeiros 25 caracteres do comando - Inicia em 0
                //substr é abreviação de substring, retorna um novo objeto criado da cópia de parte de um objeto string existente 
                
                cout << "Name \"" << name << "\"exceeds maximum length ()25.\n" << "Limiting courseName to firts 25 characters.\n" << endl;
            }
        }
        
        string getCourseName(){
            return courseName;
        }
        
        void displayMesage(){
            cout << "Wellcome to the grade book for" << getCourseName() << "!" << endl;
        }
    
    private:
        string courseName;
};


int main()
{
    //Define os objetos
    GradeBook gradeBook1 ("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2 ("CS102 C++ Data Structures");
    
    //Exibe o nome do curso 
    cout << "gradeBook1s initial course name is: " << gradeBook1.getCourseName() << "\ngradeBook2s initial course name is:" << gradeBook2.getCourseName() << endl;
    
    //Modifica o nome do curso 
    gradeBook1.setCourseName("CS101 C++ Programming");
    
    //Exibe os novos nomes 
    cout << "gradeBook1s initial course name is: " << gradeBook1.getCourseName() << "\ngradeBook2s initial course name is:" << gradeBook2.getCourseName() << endl;

    return 0;
}