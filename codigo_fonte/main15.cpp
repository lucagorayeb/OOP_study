#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
    public:
        GradeBook(string name){
            setCourseName(name); //Valida e armazena Course Name 

            aCount = 0;//Inicia a contagem de notas A como 0
            bCount = 0;//Inicia a contagem de notas B como 0
            cCount = 0;//Inicia a contagem de notas C como 0
            dCount = 0;//Inicia a contagem de notas D como 0
            fCount = 0;//Inicia a contagem de notas F como 0
        }

        void setCourseName(string name){
            
            if(name.length() <= 25){//Se o nome tiver 25 ou menos caracteres

                courseName=name;

            }else{

                courseName = name.substr(0,25);
                cout << "Name " << name << " exceeds maximun length (25). \n Limiting course name to firts 25 characters.\n" << endl;
            }
        }

        string getCourseName (){
            return courseName;
        }

        void displayMessage(){
            cout << "Wellcome to thr grade book for " << getCourseName() << "!\n" << endl;
        }

        void inputGrades(){
            int grade;

            cout << "Enter de letter grades: " << endl << "Enter the EOF character to end input." <<endl;
            while (( grade = cin.get() ) != EOF )
            {
                switch ( grade )
                {
                case 'a':
                case 'A':
                    aCount++;
                    break;

                case 'b':
                case 'B':
                    bCount++;
                    break;
                 
                case 'c':
                case 'C':
                    cCount++;
                    break;

                case 'd':
                case 'D':
                    dCount++;
                    break;

                case 'f':
                case 'F':
                    fCount++;
                    break;

                case '\n':
                case '\t':
                case ' ':
                    break;
                     
                default:
                    cout << "Incorrect letter grade entered. " << "\nEnter a new grade." << endl;
                    break;
                }
            }
            
            
        }

        void displayGradeReport(){

            cout << "\n\nNumber of students who received each letter grade: "
                 << "\nA: " << aCount
                 << "\nB: " << bCount
                 << "\nC: " << cCount
                 << "\nD: " << dCount
                 << "\nF: " << fCount
                 << endl;
        }

    private:
    string courseName;
    int aCount;//Contagem de A
    int bCount;//Contagem de B
    int cCount;//Contagem de C
    int dCount;//Contagem de D
    int fCount;//Contagem de F
};