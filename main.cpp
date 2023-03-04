#include "mylib.h"

int main() {
  int n = 0;
  cout << "Ar norite nuskaityti duomenis iš failo? Jei taip, įveskite 1, jei ne, įveskite 2: ";
  do{
    cin >> pasirinkimas;
    if (pasirinkimas != '1' && pasirinkimas != '2') cout << "Invalid choice. Please choose 1 or 2: ";
  }while(pasirinkimas != '1' && pasirinkimas != '2');

  if (pasirinkimas == '1') {
    isfailo(n);
  } else{
  iskonsoles (n);
}
pabaiga(n);
  return 0;
}
