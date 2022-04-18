#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  int bandeira;
  double valor1 = 1.80;
  double  valor2 = 2.30;
  int km;
  

  cout << "digite o numero da bandeira <1 ou 2>" ;
  cin >> bandeira ;

  if (bandeira == 1){
      cout << "Digite a km rodada: ";
      cin >> km ;

      cout<< "A kilometragem rodada é de:" << km <<endl;
      double resultado = km * valor1;
      cout<<"O valor da rrida é de: "  << resultado << endl;

  }
   if (bandeira == 2){
      cout<< "Digite a km rodada: ";
      cin >> km;

      cout<< "A kilometragem rodada é de:" << km <<endl;
      double resultado2 = km * valor2;
      cout<<"O valor da corrida é de: " << resultado2 <<endl;
   }


 }
