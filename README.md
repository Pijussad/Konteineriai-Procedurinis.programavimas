### Mokinio pažymių skaičiuoklė
Kodas skirtas įvesti studentų duomenis, bei skaičiuoti galutinius balus naudojant vidurkį arba medianą. 
Galutinis balas skaičiuojamas pagal formulę `(0.4 * namų darbų vidurkis + 0.6 * egzamino pažymys)`.

Ši programa leidžia vartotojams įvesti mokinių duomenis ir apskaičiuoti galutinius pažymius naudojant vidurkį arba medianą. Pažymių ir mokinių skaičius neribojamas, o programa palaiko du pažymių saugojimo būdus: C masyvus ir std::vector.

0.1 versija
Funkcijos:
•	Įvesti mokinio vardą ir pavardę
•	Įvesti mokinio namų darbus ir egzamino pažymius
•	Pažymių ir studentų skaičius yra neribotas. Tai pasiekiama naudojant masyvus, `new`, `delete` metodą.
•	Apskaičiuokite galutinį balą naudodami vidurkio formulę (0,4 * vidutinis namų darbų įvertinimas + 0,6 * egzamino pažymys)
•	Rodyti galutinius balus ekrane

0.2 versija
Funkcijos:
•	Leisti nuskaityti duomenis iš failo (kursiokai.txt)
•	Išvestyje rūšiuokite mokinius pagal vardą (pirmą arba paskutinį).

0.3 versija
Funkcijos:
•	Kur reikia naudojamos struktūros
•	Perkeltos funkcijos ir duomenų tipai į atskirus antraščių failus (*.h)
•	Klaidų atvejais naudojamas išimčių tvarkymas

0.4 versija
Funkcijos:
•	Sukurtas failų generatorius, kad generuotų atsitiktinius studentų sąrašo failus
•	Generuoti skirtingų įrašų dydžių failus: 1000; 10 000; 100 000; 1 000 000; 10 000 000
•	Suskirsto mokinius į dvi kategorijas pagal galutinį balą: „vargšiukus“ (balas < 5,0) ir „šaunuolius“ (balas >= 5,0)
•	Duomenys išvedami suskirsčius mokinius į du naujus failus
•	Atlikta įvairių programos žingsnių greičio analizė

0.5 versija
Konteinerių testavimas
Išmatuotas programos našumas naudojant tris skirtingus konteinerių tipus:
•	std::vektorius
•	std::sąrašas
•	std::deque
Programa buvo išandyta su failais, kuriuose yra 1000; 10 000; 100 000; 1 000 000; ir 10 000 000 įrašų.
![Gauti duomenys](https://github.com/Pijussad/1-uzdavinys/blob/V0.5/Programavimo%20uzduotis/Screenshot%202023-04-06%20at%2016.31.36.png?raw=true)
Duomenys rodo, kiek laiko reikia trims skirtingoms duomenų struktūroms ("vektoriams", "sąrašams" ir "Deque") atlikti tris operacijas ("skaitymą", "rikiavimą" ir "rūšiavimą + išvedimą") su įvairaus dydžio įvesties duomenimis (1000, 10000, 100000, 1000000 ir 1000000 elementų). Testavimas buvo atliktas naudojant Macbook Air 2021 procesorius M1, atminties - 256gb, operatyviosios atminties - 8gb.

Remdamiesi duomenimis, galime padaryti šiuos pastebėjimus:

Skaitymo laikas: Skaitymo laikas visose duomenų struktūrose yra gana panašus ir, didėjant įvesties dydžiui, reikšmingai nedidėja.

Rūšiavimo laikas: Vektoriaus ir sąrašo rūšiavimo laikas yra gerokai trumpesnis nei Deque, o vektoriaus rūšiavimo laikas yra mažiausias.

Rūšiavimo ir išvedimo laikas: Ir vėl Vektoriaus ir Sąrašo laikas panašus, o Deque šios operacijos laikas šiek tiek trumpesnis.

Bendras laikas: Vektoriaus bendras laikas yra mažiausias visų įvesties dydžių atveju, o Deque bendras laikas yra didžiausias. Sąrašo bendras laikas yra gana panašus į vektoriaus, tik šiek tiek padidėja, kai įvesties dydžiai yra didesni.

Apibendrinant galima teigti, kad, remiantis pateiktais duomenimis, efektyviausia duomenų struktūra šioms operacijoms atlikti yra Vektoriai, po jos eina Sąrašai, o  Deque yra mažiausiai efektyvi struktūra. Tačiau verta pažymėti, kad šie rezultatai gali skirtis, kai atliekamos skirtingo tipo operacijos ir duomenų dydžiai.

Duomenys:
Vectors:

1000 elementų nuskaitymas užtruko: 0.00995642 s
1000 elementų rikiavimas uztruko: 0.00486162 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.0541491 s
Visas laikas - 0.0852501


10000 elementų nuskaitymas užtruko: 0.0394166 s
10000 elementų rikiavimas uztruko: 0.0506257 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.238057 s
Visas laikas - 0.385391


100000 elementų nuskaitymas užtruko: 0.389174 s
100000 elementų rikiavimas uztruko: 0.287582 s
100000 elementų rūšiavimas ir išvedimas užtruko: 2.32627 s
Visas laikas - 3.41165


1000000 elementų nuskaitymas užtruko: 4.13663 s
1000000 elementų rikiavimas uztruko: 2.96931 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 25.7986 s
Visas laikas - 36.6666


10000000 elementų nuskaitymas užtruko: 41.4517 s
10000000 elementų rikiavimas uztruko: 34.768 s
10000000 elementų rūšiavimas ir išvedimas užtruko: 284.378 s
Visas laikas - 397.494



Lists:

1000 elementų nuskaitymas užtruko: 0.009739 s
1000 elementų rikiavimas uztruko: 0.00159208 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.0547159 s
Visas laikas - 0.0810231


10000 elementų nuskaitymas užtruko: 0.0389912 s
10000 elementų rikiavimas uztruko: 0.0213869 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.321853 s
Visas laikas - 0.429954


100000 elementų nuskaitymas užtruko: 0.38193 s
100000 elementų rikiavimas uztruko: 0.110093 s
100000 elementų rūšiavimas ir išvedimas užtruko: 3.06035 s
Visas laikas - 3.95126


1000000 elementų nuskaitymas užtruko: 3.84435 s
1000000 elementų rikiavimas uztruko: 0.867738 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 30.5971 s
Visas laikas - 38.9686


10000000 elementų nuskaitymas užtruko: 39.4182 s
10000000 elementų rikiavimas uztruko: 9.62479 s
10000000 elementų rūšiavimas ir išvedimas užtruko: 371.635 s
Visas laikas - 458.3



Deque:

1000 elementų nuskaitymas užtruko: 0.00973883 s
1000 elementų rikiavimas uztruko: 0.0153382 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.046655 s
Visas laikas - 0.087133


10000 elementų nuskaitymas užtruko: 0.037029 s
10000 elementų rikiavimas uztruko: 0.0879386 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.252539 s
Visas laikas - 0.423342


100000 elementų nuskaitymas užtruko: 0.387741 s
100000 elementų rikiavimas uztruko: 0.626811 s
100000 elementų rūšiavimas ir išvedimas užtruko: 2.5014 s
Visas laikas - 3.90218


1000000 elementų nuskaitymas užtruko: 4.52041 s
1000000 elementų rikiavimas uztruko: 9.18467 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 26.7792 s
Visas laikas - 44.2913



Failų paaiškinimas:
•	mylib.h: antraštės failas, kuriame yra funkcijų deklaracijos ir duomenų struktūros
•	makefile: paleidimo failas
•	mylib.cpp: šaltinio failas su programos įgyvendinimu
•	kursiokai.txt: Duomenų failo pavyzdys
•	README.md: Readme failas, kuriame yra informacija apie programą ir jos versijas



Diegimas :
Prieš paleisdami kodą įsitikinkite, kad jūsų sistemoje yra įdiegtas C++ kompiliatorius.

Norėdami įdiegti ir paleisti programą, atlikite šiuos veiksmus:
1.	Klonuoti saugyklą: git klonas https://github.com/Pijussad/1-uzdavinys.git
2.	Sukompiliuokite šaltinio failus: g++ -std=c++11 -o program main.cpp mylib.cp
3.	Paleiskite programą: ./program



