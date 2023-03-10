#include "mylib.h"
char pasirinkimas;
vector<Studentas> studentai;

bool compareByName(const Studentas& s1, const Studentas& s2) {
    return s1.vardas < s2.vardas;
}
void pild(Studentas &temp){
  cout << "Iveskite varda ir pavarde: ";
  cin >> temp.vardas >> temp.pavarde;

  cout << "Ar pazymiai turi buti atsitiktinai generuojami? Jeigu taip spauskite 1, jeigu ne 2 -  ";
  do{
  cin >> pasirinkimas;
  if (pasirinkimas != '1' && pasirinkimas != '2') cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2 - ";
  }while(pasirinkimas != '1' && pasirinkimas != '2');
  if (pasirinkimas == '1') {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(1, 10);

    cout << "Namų darbų pazymys - ";
    temp.paz.push_back(distr(eng));
    cout << temp.paz.back() << endl;
    cout << "Egzamino pazymys - ";
    temp.egz = distr(eng);
    cout << temp.egz << endl;
  }
  else {
    cout << "Iveskite pazymius (baigti iveskite -1): " << endl;
    int pazymys;
    while (true) {
      cin >> pazymys;
      if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "Klaida! Prašome įvesti sveikąjį skaičių: ";
        continue;
      }
      if (pazymys == -1) break;
      temp.paz.push_back(pazymys);
    }
    cout << "Egzamino pazymys - ";
    cin >> temp.egz;
    while (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits < streamsize > ::max(), '\n');
      cout << "Klaida! Prašome įvesti sveikąjį skaičių: ";
      cin >> temp.egz;
    }
  }
}

void spausd(Studentas& temp, bool armediana, double galutinis) {
    cout << endl<< left << setw(15) << temp.vardas << setw(20) << temp.pavarde << fixed << setprecision(2) << setw(15) << galutinis << endl;
}

double pazymiai(vector<int> paz, bool armediana) {
    int n = paz.size();
    if (n == 0) {
        return 0.0;
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        //cout<<paz[i];
        sum += paz[i];
    }
    if (armediana) {
        sort(paz.begin(), paz.end());
        int middle = n / 2;
        if (n % 2 == 0) {
            return (paz[middle - 1] + paz[middle]) / 2.0;
        } else {
            return paz[middle];
        }
    } else {
        return sum / n;
    }
}


void isfailo(int &n) {
    ifstream fd("kursiokai.txt");
    if (!fd) {
        throw runtime_error("Nepavyko atidaryti failo");
    }
    string skaitymas;
    int paz_sk=0;
    while (skaitymas != "Egzaminas" && skaitymas != "egz" && skaitymas != "egzaminas"&& skaitymas != "Egz") {
        fd>>skaitymas;
        paz_sk++;
    }
    paz_sk=paz_sk-3;
    try {
        do {
            studentai.push_back(Studentas());
            Studentas& temp = studentai.back();
            if (!(fd >> temp.pavarde >> temp.vardas)) {
                break;
            }
            int pazymys;
            for (int i=0; i<paz_sk; i++) {
                if (!(fd >> pazymys)) {
                    throw runtime_error("Blogas duomenų formatas");
                }
                studentai.back().paz.push_back(pazymys);
            }
            if (!(fd >> studentai.back().egz)) {
                throw runtime_error("Blogas duomenų formatas");
            }
            n++;
        } while (!fd.eof());
    }
    catch (const runtime_error &a) {
        cout << "Klaida: " << a.what() << endl;
    }
}


  
  
  
  void iskonsoles(int &n){
  do {
    studentai.push_back(Studentas());//sukuria naują objektą "Studentas" ir prideda jį prie vektoriaus galo.
    pild(studentai[n]);
    n++;
    cout << "Jei norite įvesti dar vieną studentą paspauskite 1, jei norite baigti spauskite 2 - ";
        do{
        cin >> pasirinkimas;
        if (pasirinkimas != '1'   &&   pasirinkimas != '2')
        cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2. "<<endl;
        } while (pasirinkimas != '1'  &&  pasirinkimas != '2');
  } while (pasirinkimas != '2');
  }
  
  void pabaiga(int n){
      //skaiciuojamas galutinis balas su mediana arba vidurkiu
  cout << "Ar norite galutinio balo vidurkio (1), ar medianos (2)? "<<endl;
      do {
        cin >> pasirinkimas;
        if (pasirinkimas != '1' && pasirinkimas != '2') cout << "Netinkamas pasirinkimas. Prašome pasirinkti 1 arba 2 - ";
      } while (pasirinkimas != '1'  &&  pasirinkimas != '2');
      
  bool armediana = (pasirinkimas == '2'); //char pakeiciamas i bool argumenta
  
    cout << endl << left << setw(15) << "Vardas" << setw(20) << "Pavarde" << setw(15) << (armediana ? "Galutinis (Med.)" : "Galutinis (Vid.)") << endl;
    cout << "-------------------------------------------------------------------------------------" << endl;
    sort(studentai.begin(), studentai.end(), compareByName);
  for (int i = 0; i < n; i++) {
    double galutinis = pazymiai(studentai[i].paz, armediana) * 0.4 + studentai[i].egz * 0.6;
    spausd(studentai[i], armediana, galutinis);
  }
  }
