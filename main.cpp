#include "mylib.h"

    struct Studentas {
      string vardas = "", pavarde = "";
      int *paz = nullptr;
      int egz = 0;
      int n;
    };
    
    void pild(Studentas & temp, int paz_sk);
    void spausd(Studentas & temp, bool armediana, double galutinis);
    double pazymiai(int *paz, int paz2, bool armediana);
    
    int main() {
      char pasirinkimas; //ar dar vienas studentas? ar mediana, ar vidurkis?
      int n = 0;
      int paz_sk;
      Studentas *studentai = nullptr; //sukuriama Studentas tipo rodyklė studentai, kuri niekur nenukreipta.
      //tol, kol neįvedama t pildomas masyvas studentai, kiekvieno ciklo pradžioje sukuriamas vienu didesnis dinaminis masyvas.
      do {
        Studentas *temp = new Studentas[n + 1]; //sukuriama nauja Studentas tipo rodyklė temp skirta dinaminiam masyvui.
        for (int i = 0; i < n; i++) {
          temp[i] = studentai[i];
        }
        delete[] studentai; //rodykles studentai atmintis atlaisvinama
        studentai = temp; //rodykle studentai atnaujinama, kad rodytu temp masyva
        pild(studentai[n], paz_sk); //masyvas studentai uzpildomas
        n++;
        cout << "Jei norite įvesti dar vieną studentą paspauskite 1, jei norite baigti spauskite 2 - ";
        do{
        cin >> pasirinkimas;
        if (pasirinkimas != '1'   &&   pasirinkimas != '2') cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2. "<<endl;
        } while (pasirinkimas != '1'  &&  pasirinkimas != '2');
        
      } while (pasirinkimas != '2');
    
      //skaiciuojamas galutinis balas su mediana arba vidurkiu
      cout << "Ar norite galutinio balo vidurkio (1), ar medianos (2)? "<<endl;
      do {
        cin >> pasirinkimas;
        if (pasirinkimas != '1' && pasirinkimas != '2') cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2 - ";
      } while (pasirinkimas != '1'  &&  pasirinkimas != '2');
      
      bool armediana = (pasirinkimas == '2');//char pakeiciamas i bool argumenta
      for (int i = 0; i < n; i++) {
        double galutinis = pazymiai(studentai[i].paz, studentai[i].n, armediana) * 0.4 + studentai[i].egz * 0.6;
        spausd(studentai[i], armediana, galutinis);
      }
      delete[] studentai;
      return 0;
    }
    
    
    void pild(Studentas & temp, int paz_sk) {
    char pasirinkimas;
      paz_sk = 0;
      cout << "Iveskite varda ir pavarde: ";
      cin >> temp.vardas >> temp.pavarde;
      
      cout<< "Ar pazymiai turi buti atsitiktinai generuojami? Jeigu taip spauskite 1, jeigu ne 2 -  ";
      do{
        cin >> pasirinkimas;
        if (pasirinkimas != '1' && pasirinkimas != '2') cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2 - ";
      } while (pasirinkimas != '1'  &&  pasirinkimas != '2');
      
        if (pasirinkimas=='1'){
        std::random_device rd; 
        std::mt19937 eng(rd());
        std::uniform_int_distribution<> distr(1, 10);
        
        cout << "Namų darbų pazymys - ";
        temp.paz = new int[1];
        *(temp.paz) = distr(eng);
        cout << *(temp.paz)<<endl;
        temp.n=1;
          cout << "Egzamino pazymys - ";
          temp.egz=distr(eng);
            cout<<temp.egz<<endl;
          }
      
        else{
      cout << "Iveskite pazymius (baigti iveskite -1): "<<endl;
      int *paz = nullptr;
      int n = 0;
      int pazymys;
      while (true) { //kai sudedavau 2 salygas po pirmos klaidos nebeveikdavo (cin>>x metodu)
        //int pazymys;
        cin >> pazymys;
        if (cin.fail()) { //praleidzia neteisinga ivedima
          cin.clear(); //error flags istrina
          cin.ignore(numeric_limits < streamsize > ::max(), '\n'); //istrina ivedima?
          cout << "Klaida: pazymys turi buti sveikasis skaicius. Bandykite dar karta." << endl;
        } else {
          if (pazymys == -1) { //jei ivede -1 tai sustabdo ivedima
            break;
          }
          ///tas pats kaip su studentais
          int * temp = new int[n + 1];
          for (int i = 0; i < n; i++) {
            temp[i] = paz[i];
          }
          delete[] paz;
          paz = temp;
          paz[n] = pazymys;
          n++;
        }
      }
      temp.paz = paz;
      temp.n=n;
    
      //tas pats kaip su pazymiais
      cout << "Iveskite egzamino pazymi: "<<endl;
      while (true) {
        cin >> temp.egz;
        if (cin.fail()) {
          cin.clear();
          cin.ignore(numeric_limits < streamsize > ::max(), '\n');
          cout << "Klaida: egzamino pazymys turi buti sveikasis skaicius. Bandykite dar karta." << endl;
          continue; 
        }
        break;
      }
        }
      cout << "Duomenys irasyti." << endl;
    }
    
    
    void spausd(Studentas & temp, bool armediana, double galutinis) {
      cout << endl << left << setw(15) << "Vardas" << setw(20) << "Pavarde" << setw(15) << (armediana ? "Galutinis (Med.)" : "Galutinis (Vid.)") << endl;
      cout << "-------------------------------------------------------------------------------------" << endl;
      cout << endl << left << setw(15) << temp.vardas << setw(20) << temp.pavarde << right << setw(15) << fixed << setprecision(2) << galutinis << endl;
      delete[] temp.paz;
    }
    
    
    double pazymiai(int * paz, int paz2, bool armediana) {
  if (armediana) { //jeigu medianos reikia
    sort(paz, paz + paz2);
    if (paz2 % 2 == 0)
      if (paz2 == 0) return 0;//jeigu 0
      else return (paz[paz2 / 2 - 1] + paz[paz2 / 2]) / 2.0;
    else
    if (paz2 == 0) return 0;
    else return paz[paz2 / 2];
  } else { //jeigu vidurkio reikia
    double sum = 0.0;
    for (int i = 0; i < paz2; i++) {
      sum += paz[i];
      cout << paz[i];
    }
    if (sum == 0) return 0;
    else return sum / paz2;
  }
}