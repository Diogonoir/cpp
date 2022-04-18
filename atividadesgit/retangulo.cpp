#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

int area1;
int area2;
int altura1;
int altura2;


     cout << "Digite a area do primeiro retangulo em cm: ";
     cin >> area1;

     cout << "digite a altura do primeiro retangulo: ";
     cin >> altura1;

     cout << "Digite a area do segundo retangulo em cm: ";
     cin >> area2;

     cout << "digite a altura do primeiro retangulo: ";
     cin >> altura2;

     cout << "A area do primeiro retangulo é de: " << area1 * altura1<< endl;
     cout << "A area do segundo retangulo é de: " << area2 * altura2<< endl;


     if (area1 * altura1 < area2 * altura2) {
            cout << "A area do segundo retangulo é maior"<<endl;
     }
      if (area1 * altura1 > area2 * altura2) {
          cout << "A area do primeiro retangulo é maior"<<endl;

     } else if (area1 * altura1 == area2 * altura2){
         cout<< "A area de ambos sao iguais"<<endl;
     }

    
   
 
        cout << "A area do segundo retangulo é:" << area2 * area2;


}


