#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    public:

        GradeBook(string name){

            setCourseName(name);
            string aCount = 0;//Retirar todos 
            string bCount = 0;
            string cCount = 0;
            string dCount = 0;
            string fCount = 0;
        }

        void setCourseName(string name){

            if(name.length() >= 25){
                name = name.substr(0,25);
                courseName = name;
                cout << "\nWrite a course name valid" << "\nLimiting for the firts 25 characters" << endl;
            }else{
                courseName = name;
            }
        }

        string getCourseName(){
            return courseName;
        }

        void displayMensage(){

        }


    private:
        string courseName;
};