#include <iostream>
using namespace std;
int main(){
  float importot;
  float importon;
  float iva;
  int aliquota;
  cout<<"Inserisci l'importo compreso di iva"<<endl;
  cin>>importot;
  cout<<"Inserisci l'aliquota"<<endl;
  cin>> aliquota;
  importon=(100*importot)/(100+aliquota);
  cout<<"Prezzo netto=\t"<<importon<<endl;
  iva=importot-importon;
  cout<<"Iva=\t"<<iva<<endl;
  system ("pause");
  return(0);
}
