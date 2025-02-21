#include <iostream>
#include <string>
using namespace std;

class carro
{
    public:
        carro (string detalhes){
            setMarca_Modelo(detalhes);             
        }

        void setMarca_Modelo(string detalhes){
            detalhes_carro = detalhes;
        }

        string exibirInformacoes(){
            return detalhes_carro;
        }

        carro (int ano){
            setMarca_Modelo2(ano);             
        }

        void setMarca_Modelo2(int ano){
            ano_carro = ano;
        }

        int exibirInformacoes2(){
            return ano_carro;
        }

    private:
        string detalhes_carro;
        int ano_carro;
};

int main(){

    carro carromarca("Ferrari");
    carro carromodelo("RR205");
    carro carroano(2005);

    cout << "A marca do carro eh " << carromarca.exibirInformacoes() << "\nO modelo do carro eh " << carromodelo.exibirInformacoes() << "\nO ano do carro eh " << carroano.exibirInformacoes2() << endl;

    return 0;
}