#include <iostream>
#include <string>
using namespace std;
 
  class GradeBook
   {
    public:

        // construtor inicializa courseName com String fornecido como argumento
        GradeBook( string name )
        {
        setCourseName( name ); // valida e armazena courseName
        } // fim do construtor GradeBook
      
        // função que configura o nome do curso;
        // assegura que o nome do curso tenha no máximo 25 caracteres
        void setCourseName( string name )
        {
          if ( name.length() <= 25 ) // se o nome tiver 25 ou menos caracteres
          courseName = name; // armazena o nome do curso no objeto
        
          if ( name.length() > 25 ) // se o nome tiver mais de 25 caracteres
          {
          // configura courseName como os primeiros 25 caracteres do parâmetro name
          courseName = name.substr( 0, 25 ); // inicia em 0, comprimento de 25
        
          cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
          << "Limiting courseName to first 25 characters.\n" << endl;
          } // fim do if
        } // fim da função setCourseName
      
        // função para obter o nome do curso
        string getCourseName()
        {
          return courseName; // retorna courseName do objeto
        } // fim da função getCourseName
      
        // exibe uma mensagem de boas-vindas para o usuário GradeBook
        void displayMessage()
        {
        // chama getCourseName para obter o courseName
        cout << "Welcome to the grade book for\n" << getCourseName()
        << "!" << endl;
        } // fim da função displayMessage

    private:
        string courseName; // nome do curso para esse GradeBook
 }; // fim da classe GradeBook
 
 
  // a função main inicia a execução do programa
  int main()
  {
  // cria dois objetos GradeBook;
  // nome inicial de curso de gradeBook1 é muito longo
  GradeBook gradeBook1( "CS101 Introduction to Programming in C++" );
  GradeBook gradeBook2( "CS102 C++ Data Structures");
 
  // exibe courseName de cada GradeBook
  cout << "gradeBook1s initial course name is: "
  << gradeBook1.getCourseName()
  << "\ngradeBook2s initial course name is: "
  << gradeBook2.getCourseName() << endl;
 
  // modifica courseName do myGradeBook (com uma string de comprimento válido)
  gradeBook1.setCourseName( "CS101 C++ Programming" );
 
  // exibe courseName de cada GradeBook
  cout << "\ngradeBook1s course name is: "
  << gradeBook1.getCourseName()
  << "\ngradeBook2s course name is: "
  << gradeBook2.getCourseName() << endl;
  return 0; // indica terminação bem-sucedida
  } // fim de main

  //Fazer tudo em 1 só para ver se funciona
  