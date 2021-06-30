#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

int main() {

   vector<string> palavras_v;
   palavras_v.push_back("teste 1");
   palavras_v.push_back("teste 2");
   palavras_v.push_back("teste 3");

   list<string> palavras_l;
   palavras_l.push_back("leste 1");
   palavras_l.push_back("leste 2");
   palavras_l.push_back("leste 3");

   for(int i = 0; i < palavras_v.size(); i++){
    cout << "Acessando: " << palavras_v[i] << endl;
   }

   list<string>:: iterator it;

   for(it = palavras_l.begin(); it != palavras_l.end(); it++){
        string valor = *it;
        cout << "Acessando valor: " << valor << endl;
   }

   return 0;
}