#include <iostream>
using namespace std;

string Freversa(string p){
 string r;
 for(int i = p.size()-1; i >= 0; i--)
  r += p[i];
 return r;
}

int main(){
 string palabra, reversa;
 cin >> palabra;
 reversa = Freversa(palabra);
 cout << reversa;
 if(palabra == reversa)
  cout << "Es palindromo";
 else
  cout << "No es palindromo";
}