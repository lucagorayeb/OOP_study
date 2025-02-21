 // Figura 3.15: GradeBook.h
   // Definição de classe GradeBook apresenta a interface public da
   // classe. Definições de função-membro aparecem em GradeBook.cpp.
   #ifndef GRADEBOOK_H
   #define GRADEBOOK_H
   #include <string> // o programa utiliza classe de string padrão do C++
   using namespace std;
  
   // definição da classe GradeBook
   class GradeBook
   {
    public:
    GradeBook( string ); // construtor que inicializa um objeto GradeBook
    void setCourseName( string ); // função que configura o nome do curso
    std::string getCourseName(); // função que obtém o nome do curso
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
    private:
    string courseName; // nome do curso para esse GradeBook
 }; // fim da classe GradeBook
 #endif