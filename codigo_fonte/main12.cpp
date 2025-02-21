#include <iostream>
#include <string>
using namespace std;

class Analysis
{
    public:
        Analysis (double grade){
            setGrades(grade);
        }

        void setGrades(double grade){
            int c=1;
            while (c <= 10)
            {
                cout << "Enter grade:" << endl;
                cin >> grade;
                    if (grade>=8)
                    {
                        aproved=aproved+1;
                    }else{
                        reproved=reproved+1;
                    }
                c=c+1;
            }
            return getGrades();
        }

        void getGrades(){
            cout << "Pass: " << aproved << endl;
            cout << "Failure: " << reproved << endl;
        }

    private:
        int reproved=0;
        int aproved=0;
};

int main(){

    Analysis myAnalysis(0);
    
}