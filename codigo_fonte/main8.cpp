 // Figura 3.13: fig03_13.cpp
  // Demonstração de classe GradeBook depois de separar
  // sua interface de sua implementação.
  #include <iostream>
  using namespace std;
  
  class GradeBook
  {
    public:
            // o construtor inicializa courseName com a string fornecida como argumento
        GradeBook( string name )
        {
        setCourseName( name ); // chama a função set para inicializar courseName
        } // fim do construtor GradeBook
    
        // função para configurar o nome do curso
        void GradeBook::setCourseName( string name )
        {
        courseName = name; // armazena o nome do curso no objeto
        } // fim da função setCourseName

        // função para obter o nome do curso
        std::string GradeBook::getCourseName()
        {
        return courseName; // retorna courseName do objeto
        } // fim da função getCourseName
    
        // exibe uma mensagem de boas-vindas para o usuário GradeBook
        void GradeBook::displayMessage()
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
  // cria dois objetos GradeBook
  GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
  GradeBook gradeBook2( "CS102 Data Structures in C++" );
 
  // exibe valor inicial de courseName para cada GradeBook
 cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;
  return 0; // indica terminação bem-sucedida
  } // Página 119