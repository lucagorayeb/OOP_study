#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook (string name){
            setCourseName(name);
        }

        void setCourseName(string name){
            
            if(name.length() >= 25){
                courseName = name.substr(0,25);
                cout << "Name " << name << "exceeds maximun length" << "\nLimiting the course name to firsts 25 characters" << endl;
            }else{
                courseName = name;
            }
                
        }

        string getCourseName(){
            return courseName;
        }

        void displayMessage(){
            cout << "Welcome to the grade book for " << getCourseName() << "!\n" << endl;
        }

        void determineClassAverage(){

            int c = 0;
            int grade;
            int total = 0;
            int average;

            while (c<10){
                cout << "Type your grade: " << endl;
                cin >> grade;
                total=total+grade;
                c = c + 1;
           }
           average=total/c;

           cout << "\nTotal of grades: " << total << endl;
           cout << "\nThe average is " << average << endl;
        }

    private:
        string courseName;
};

int main(){

    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.determineClassAverage();
    return 0;
}