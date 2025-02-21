#include <iostream>
#include <string>
using namespace std;

class GradeBook{
public:
    void displayMesage(string courseName){
        cout << "Wellcome to the grade book of " << courseName << "!" << endl;
    }
};

int main(){
    string nameOfCourse;
    GradeBook myGradeBook; 

    cout << "Please enter the course name: " << endl;
    getline(cin, nameOfCourse);//Lê o nome do curso com espaços em branco 
    cout << endl;

    myGradeBook.displayMesage(nameOfCourse);
    return 0;
}

